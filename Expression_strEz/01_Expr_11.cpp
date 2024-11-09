#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n) {
    int fact=1;
    for (int i=1;i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main() {
    double calculate;
    calculate = (M_PI - (factorial(10)/pow(8,8))+pow(log(9.7),(7/sqrt(71))-sin(0.6981317008)))/(pow(1.2,cbrt(2.3)));
    cout << calculate << '\n';

}