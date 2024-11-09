#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> s;
  int n;
  int count = 0;
  bool dup = false;
  while (cin >> n) {
    if (!dup) {
      if (s.find(n) == s.end()) {
        s.insert(n);
        count++;
      } else {
        dup = true;
        count++;
      }
    }
  }
  if(dup){
    cout << count;
  }else{
    cout << "-1";
  }
}