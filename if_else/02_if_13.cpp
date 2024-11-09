#include <iostream>
#include <cmath>

int main() {
    double a,b,c,d,sum;
    std::cin >> a >> b >> c >> d;
    double max = a,min = a;

    if (b < min) min=b;
    if (c < min) min=c;
    if (d < min) min=d;

    if (b > max) max=b;
    if (c > max) max=c;
    if (d > max) max=d;

    sum = ((a+b+c+d)-(min+max))/2;

    std::cout << round(sum*1e2)/1e2;
}