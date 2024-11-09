#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double miw,sigma,a,b,del;
    cin >> miw >> sigma >> a >> b >> del;
    double m1 = (b-a)/del;
    int m = floor(m1);
    //cout << m << endl;

    double under = sigma*(sqrt(2*M_PI));
    double sum = 0;
    double x,power,f;

    for(int i=0 ;i<=m;i++){
        x = a + ((double)i*del);
        power = (-1*pow(x-miw,2))/(2*sigma*sigma);
        f = ((1/(under)) * pow(M_E,power));
        sum += f*del;
    }
    //cout << x << " " << power << " " << f << endl;

    cout << round(sum*1e4)/1e4;

}
