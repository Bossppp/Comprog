#include <iostream>
using namespace std;

int main() {
    float p , t=1;
    cin >> p;
    int k = 1;
    while (true) { 
        t = (t*(365-(k-1)))/365;
        if (1-t >= p) {
            break;
        } else {
            ++k;
        }
    }
    cout << k;
}



