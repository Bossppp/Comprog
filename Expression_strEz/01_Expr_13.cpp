#include <iostream>
#include <cmath>
using namespace std;

double roundTo3decimal(double value) {
    return round(value*1e3)/1e3;
}

int main() {
    double a,b,c,x1,x2;
    cin >> a >> b >> c;
    double discriminant = b*b - 4*a*c;

    x1 = (-b-sqrt(discriminant))/(2*a);
    x2 = (-b+sqrt(discriminant))/(2*a);

    cout << roundTo3decimal(x1) << " " << roundTo3decimal(x2) << endl;;


}