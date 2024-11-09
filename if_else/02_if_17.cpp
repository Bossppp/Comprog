#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight;

    if (weight > 2000) {
        cout << "reject";
    } else if (weight <= 2000 && weight > 1000) {
        cout  << "58";
    } else if (weight <=1000 && weight > 500) {
        cout << "38";
    } else if (weight <=500 && weight >250) {
        cout << "28";
    } else if (weight <= 250 && weight > 100) {
        cout << "22";
    } else if (weight <= 100) {
        cout << "18";
    }

    return 0;
}