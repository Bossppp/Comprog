#include <iostream>
using namespace std;

int main() {
    int num[10] = {0,1,2,3,4,5,6,7,8,9};
    string text;
    getline(cin,text);
    string missingNum = "";
    bool found = false;

    for (int i = 0; i < 10; i++) {
        found = false; // ตั้งค่าให้ found เป็น false ทุกครั้งที่เข้าลูปใหม่
        for (int j = 0; j < text.length(); j++) {
            if (text[j] == num[i] + '0') { // num[i] + '0' คือการแปลง int zให้เป็น char
                found = true;
                break;
            }
        }
        if (!found) {
            missingNum += num[i] + '0';
        }
    }
    if (missingNum.empty()) {
        cout << "None";
    }
    for (int i = 0; i < missingNum.length(); i++) {
        cout << missingNum[i];
        if (i != missingNum.length() - 1) {
            cout << ",";
        }
    }
}