#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<string> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
}
// loop in line and when found delimeter then pushback
vector<string> split(string line, char delimiter) {
  vector<string> v;
  string temp = "";
  for (int i = 0; i < line.size(); i++) {
    if (line[i] == delimiter) {
      if (!temp.empty()) {
        v.push_back(temp);
        //printVec(v);
        temp.clear();
      } 
    }else {
        temp += line[i];
        if(i == line.size()-1){
            v.push_back(temp);
        }
      }
  }
  return v;
}
int main() {
  string line;
  getline(cin, line);
  string delim;
  getline(cin, delim);
  for (string e : split(line, delim[0])) {
    cout << '(' << e << ')';
  }
}