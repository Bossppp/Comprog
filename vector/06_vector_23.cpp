#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

string upgrade(string grade) {
  string grades[] = {"F", "D", "D+", "C", "C+", "B", "B+", "A"};
  for (int i = 0; i < 8; i++) {
    if (grade == grades[i]) {
      if (i == 7)
        return "A";
      else
        return grades[i + 1];
    }
  }
  return "F";
}

int main() {
  vector<pair<string, string>> stdgrades;
  string stdID, grade;
  //cin >> stdID;
  while (true) {
    cin >> stdID;
    if(stdID == "q") break;
    cin >> grade;
    if (stdID != "q")
      stdgrades.push_back(make_pair(stdID, grade));
  }

  string upstd;
  while (cin >> upstd) {
    for (int i = 0; i < stdgrades.size(); i++) {
      if (upstd == stdgrades[i].first) {
        stdgrades[i].second = upgrade(stdgrades[i].second);
      }
    }
  }

  for (auto e : stdgrades) {
    cout << e.first << " " << e.second << endl;
  }
}