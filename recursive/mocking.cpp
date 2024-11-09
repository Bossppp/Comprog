#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

int fac(int n){
    int sum = 1;
    for(int i=1;i<=n;i++){
        sum *= i;
    }
    return sum;
}
int N(int n,int k){
    if(n == 0 || k == 0 || k > 0) return 0;
    if(n == k) return 1;
    return (n-k) * N(n-1,k) + N(n-1,k-1);
}

int narayana(int n, int k) {
    if (n == 0 || k == 0 || k > n) return 0;
    if (n == k) return 1;
    return (n - k) * narayana(n - 1, k) + narayana(n - 1, k - 1);
}

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



int main() {
    int n,k;
    cin >> n;
    cout << phi(n);
}