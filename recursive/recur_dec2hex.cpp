#include <iostream>
#include <string>

using namespace std;

string dec2bin(int d) {
  if (d < 2)
    return (d == 0 ? "0" : "1");
  return dec2bin(d / 2) + dec2bin(d % 2); //เอาstring มาบวกคือเอาเลขมาต่อ eg. 3/2 = 1 , 3%2 = 1 -> 11
}

string dec2hex(int d) {
    string arr[16] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
    if(d < 16)
        return(arr[d]);
    return dec2hex(d/16) + dec2hex(d%16);
}

int main() {
  int d;
  while (cin >> d) {
    cout << d << " -> " << dec2hex(d) << endl;
  }
  return 0;
}