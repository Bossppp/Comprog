#include <iostream>
#include <string>
using namespace std;

// สลับ ตัวตั้งแต่สระเป็นต้นไปของคำหน้าสุดและท้ายสุด
int main() {
  string poun;
  getline(cin, poun);
  char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
  // แยกคำก่อน
  string first = "";
  int i = 0;
  while (poun[i] != ' ') {
    first += poun[i];
    i++;
  }
  string last = "";
  int j = poun.size() - 1;
  int sortLast = 0;
  while (poun[j] != ' ') {
    sortLast++;
    j--;
  }
  for (int k = poun.size() - sortLast; k < poun.size(); k++) {
    last += poun[k];
  }
  // cout << first << " " << last << endl;

  // หาสระ เจอก็เปลี่ยนเป็น true แล้วไล่เก็บตัวตั้งแต่ vowel นั้นจนสุด
  string firstCl = "";
  string firstPrefix = "";
  bool foundVowel = false;
  for (int n = 0; n < first.size(); n++) {
    if (!foundVowel && (first[n] == 'a' || first[n] == 'e' || first[n] == 'i' ||
                        first[n] == 'o' || first[n] == 'u')) {
      foundVowel = true;
    }
    if (foundVowel) {
      firstCl += first[n];
    } else {
      firstPrefix += first[n];
    }
    // for(int i=n;i<first.size();i++){
    //     firstCl += first[i];
    //     //cout << i << " " << firstCl << " " << endl;
    //     n++;
    // }
  }
  string lastCl = "";
  string lastPrefix = "";
  foundVowel = false;
  for (int n = 0; n < last.size(); n++) {
    if (!foundVowel && (last[n] == 'a' || last[n] == 'e' || last[n] == 'i' ||
                        last[n] == 'o' || last[n] == 'u')) {
      foundVowel = true;
    }
    if (foundVowel) {
      lastCl += last[n];
    } else {
      lastPrefix += last[n];
    }
    // for(int i=n;i<last.size();i++){
    //     lastCl += last[i];
    //     //cout << i << " " << lastCl << " " << endl;
    //     n++;
    // }
  }
  // cout << firstCl << " " << lastCl;

  // สลับ first สระ last สระ
  string temp;
  temp = firstCl;
  firstCl = lastCl;
  lastCl = temp;
  // cout << firstCl << " " << lastCl;

  string firstCombi = firstPrefix + firstCl;
  string lastCombi = lastPrefix + lastCl;

  cout << firstCombi + poun.substr(i, j - i + 1) + lastCombi;
}