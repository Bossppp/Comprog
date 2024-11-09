#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num,sum,avg;
    int n = 0;
    sum = 0;
    cin >> num;

    if (num == -1) {
        cout << "No Data";
        return 0;
    }

    while(num != -1) {
        sum += num;
        n++;
        cin >> num;
    }
    avg = sum/n;
    cout << round(avg*1e2)/1e2;

}