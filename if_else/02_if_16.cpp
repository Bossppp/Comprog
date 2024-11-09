#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num > 0) {
        cout << "positive\n";
        if (num%2 == 0) {
            cout << "even";
        } else {
            cout << "odd";
        }
    } else if (num < 0) {
        cout << "negative\n";
        if (num%2 == 0) {
            cout << "even";
        } else {
            cout << "odd";
        }
    } else {
        cout << "zero\n";
        cout << "even";
    }
}