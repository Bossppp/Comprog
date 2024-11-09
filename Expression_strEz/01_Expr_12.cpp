#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double W,H,mos,hay,boyd;
    cin >> W >> H;

    mos = (sqrt(W*H))/60;
    hay = 0.024265 * pow(W,0.5378) * pow(H,0.3964);
    boyd = 0.0333 * pow(W,0.6157-0.0188*log10(W))*pow(H,0.3);

    cout << setprecision(15) << mos << '\n';
    cout << setprecision(15) << hay << '\n';
    cout << setprecision(15) << boyd << '\n';
}