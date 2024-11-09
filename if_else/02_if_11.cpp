#include <iostream>
#include <string>
using namespace std;

bool checkingBranch (string targetNum,string array[]) {
    for (int i = 0;i < 27;i++) {
        if (array[i] == targetNum) {
            return true;
        }
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    string Checkingary[27] = {"01","02","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","51","53","55","58"};

    if (checkingBranch(s,Checkingary)) {
        cout << "OK";
    } else {
        cout << "Error";
    }
}