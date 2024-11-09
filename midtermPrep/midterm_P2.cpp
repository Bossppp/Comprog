#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double h,t,u,g,r,theta;
    g = 10;
    cin >> u >> theta >> t;
    double rad = theta * (M_PI/180);
    double rad2 = theta * (180/M_PI);

    h = (t - ((u*sin(rad))/g)) * ( (u*sin(rad)) + (0.5*g)*(t-(3*((u*sin(rad))/g))) );
    r = u*cos(rad) * t;

    cout << round(h*10)/10  << " " << round(r*10)/10 ;
}

