#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int main() {
  // 1. Input
  vector<int> data;
  int n;
  while (cin >> n) {
    data.push_back(n);
  }

  // 2. find max length
  int maxlength = 0;
  int start = 0;
  int currentData = data[0];

  vector<int> startpos;
  vector<int> endpos;
  vector<int> dupValue;

  for (int i = 1; i < data.size(); i++) {
    if (data[i] != currentData) {
      int length = i - start; // คำนวนช่วง
      if (length > maxlength) {
        maxlength = length;
        startpos.clear(); // clear ค่าเก่า
        endpos.clear();
        dupValue.clear();
        startpos.push_back(start); // เพิ่มค่าใหม่
        endpos.push_back(i);
        dupValue.push_back(currentData);
      } else if (length == maxlength) {
        startpos.push_back(start);
        endpos.push_back(i);
        dupValue.push_back(currentData);
      }
      start = i;
      currentData = data[i];
    }
  }

  // check last element
  int length = data.size() - start;
  if (length >= maxlength) {
    if (length > maxlength) {
      startpos.clear();
      endpos.clear();
      dupValue.clear();
      startpos.push_back(start);
      endpos.push_back(data.size());
      dupValue.push_back(currentData);
    } else {
      startpos.push_back(start);
      endpos.push_back(data.size());
      dupValue.push_back(currentData);
    }
  }
  //3. รวมข้อมูลเตรียมเรียงตาม Dupvalue
  vector<tuple<int,int,int>> result;
  for(int i=0;i<dupValue.size();i++){
    result.push_back(make_tuple(dupValue[i],startpos[i],endpos[i]));
  }

  //4. sort
  sort(result.begin(),result.end());

  // 5. output
  for(auto e : result){
    cout << get<0>(e) << " --> x[ " << get<1>(e) << " : " << get<2>(e) << " ]" << endl;
  }


}