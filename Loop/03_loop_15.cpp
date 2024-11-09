#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cin >> sentence;
    for (int i=0;i<sentence.length();i++) {
        if (sentence[i] == '(') {
            sentence[i] = '[';
        } else if (sentence[i] == '[') {
            sentence[i] = '(';
        } else if (sentence[i] == ')') {
            sentence[i] = ']';
        } else if (sentence[i] == ']') {
            sentence[i] = ')';
        }
    }
    cout << sentence;
}