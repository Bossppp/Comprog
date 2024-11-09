#include <iostream>
#include <string>
//#include <cctype>
using namespace std;


int main() {
    string password;
    

    while (getline(cin,password)) { //เก็บ password แต่ละบรรทัดๆ
        int upper = 0,lower = 0,spec = 0,num = 0;
            for (int i=0;i<password.length();i++) {
                if ((password[i] >= 'A') && (password[i] <= 'Z')) {
                    upper++;
                } else if ((password[i] >= 'a') && (password[i] <= 'z')){
                    lower++;
                } else if ((password[i] >= '0') && (password[i] <= '9')) {
                    num++;
                } else {
                    spec++;
                }
            }
            if (password.length() >= 12 && upper>0 && lower>0 && num>0 && spec>0) {
                cout <<  ">> strong\n";
            } else if (password.length() >= 8  && upper>0 && lower>0 && num>0) {
                cout << ">> weak\n";
            } else {
                cout << ">> invalid\n";
            }

    }
    

}