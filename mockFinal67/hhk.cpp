#include <iostream>
using namespace std;

int phi(int n, int p = 2) {
    if (n == 1) {
        return 1;
    }
    // หา p ที่เป็นตัวประกอบเฉพาะของ n
    while (n % p != 0) {
        p++;
    }
    // ถ้า p เป็นตัวประกอบเฉพาะของ n ให้ทำการลดขนาด n
    int reduced_n = n;
    while (reduced_n % p == 0) {
        reduced_n /= p;
    }
    return phi(reduced_n, p + 1) * (n / p) * (p - 1) / p;
}

int main(){
    int p = 2;
    int n; cin>> n;
    while(n > 1){
        if(n % p == 0){
            cout << p << " ";
            n /= p;
        }else{
            p++;
        }
    }
    cout << phi(n);
}