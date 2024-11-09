#include <iostream>
#include <string>
using namespace std;

bool isUpper (char c) {
    if (c >= 'A' && c <= 'Z') return true;
    return false;
}

bool isNumber (char c) {
    if (c >= '0' && c <= '9') return true;
    return false;
}

bool isLower (char c) {
    if (c >= 'a' && c <= 'z') return true;
    return false;
}

int main() {
    string camel;
    cin >> camel;
    for(int i=0;i<camel.size();i++){
        cout << camel[i];
        if (isUpper(camel[i+1])) cout << ", "; // if next character is upper print ,
        if (isNumber(camel[i+1])&& !isNumber(camel[i])) cout << ", ";
        if (isNumber(camel[i]) && isLower(camel[i+1])) cout << ", ";
    }
   

}  
