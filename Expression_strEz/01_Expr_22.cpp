#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int xm,ym,xe,ye,re,rp;
    cin >> xe >> ye >> re >> rp >> xm >> ym;

    double A = xm-xe;
    double B = ym-ye;
    double C = sqrt(pow(A,2)+pow(B,2));

    double c = re-rp;
    double b = (c*B)/C;
    double a = (c*A)/C;

    double xp = xe+a;
    double yp = ye+b;

    cout << round(xp) << " " << round(yp);

}