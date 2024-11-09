#include <iostream>
#include <string>
using namespace std;

int main() {
    string t;
    int k;
    cin >> t >> k;
    //getline(cin,t);
    //cin >> k;
    string clearingText = "";
    t += " ";
    int count = 1;

    for (int i=1;i<t.length();i++) {
        if (t[i] == t[i-1]) {
            count++;
        } else {
            if (count < k){
                clearingText += string(count,t[i-1]); // เก็บอักษร count ตัวของ t[i-1] ลง clearingText
            }
            count = 1; //ขึ้นตัวใหม่นับ count=1 ใหม่
            
        }
    }
    cout << clearingText;
}
