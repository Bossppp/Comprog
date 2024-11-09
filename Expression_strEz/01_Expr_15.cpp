#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x,y;
    cin >> x;

    double insqrt = log(pow(x+1,2));

    y = (pow(x,sqrt(insqrt)))/(10-x);
    cout << round(y*1e6)/1e6;
}