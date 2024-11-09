#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[10] = {"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
    string nickname[10] =  {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"};
    int n;
    cin >> n;
    string nameIn;
    bool found = false;
    for (int i=0;i<n;i++) {
        cin >> nameIn;
        found = false;
        for (int j=0; j < sizeof(nickname)/sizeof(nickname[0]); j++) { //กรอกชื่อจริงได้ชื่อเล่น
            if(nameIn == nickname[j]) {
                cout << name[j] << '\n';
                found = true;
            } 
        }
        for (int k=0; k < sizeof(name)/sizeof(name[0]); k++) { //กรอกชื่อเล่นได้ชื่อจริง
            if(nameIn == name[k]) {
                cout << nickname[k] << '\n';
                found = true;
            }
        }
        if (!found) cout << "Not found" << '\n';
    }
}