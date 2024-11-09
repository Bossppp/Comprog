#include <iostream>
#include <string>
using namespace std;

int main() {
    string pNum;
    cin >> pNum;

    if (pNum.length() == 10){
        if (pNum[0]-'0' == 0 && pNum[1]-'0' == 6 || pNum[1]-'0' == 8 || pNum[1]-'0' == 9) {
            cout << "Mobile number";
        } else {
            cout << "Not a mobile number";
        }
    } else {
        cout << "Not a mobile number";
    }

}