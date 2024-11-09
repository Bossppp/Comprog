#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];

    // Input A
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    //Sum
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        if(i == 0){
            cout << setprecision(10) << A[0] << endl;
            continue;
        }
        double sumFraction = 0;
        double prevSum = 0;
        for (int j=i; j>0 ; j--){
            if(j == i){ // ตัวล่างสุด
                sumFraction = 1.0/A[j];
                prevSum = sumFraction;
            } else {
                sumFraction = 1.0/(A[j]+prevSum);
                prevSum = sumFraction;
            }
        }
        cout << setprecision(10) << A[0] + sumFraction << endl;
    }
}