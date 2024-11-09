#include <bits/stdc++.h>
using namespace std;

long long powF(int base,int exp){
    unsigned long long result = 1;
    for(int i=0;i<exp;i++){
        result *= base;
    }
    return  result;
}

long long countNumDigit(long long n){
    long long numdigit = 1;
    int k = 1; //หลัก
    //ทำพวกเต็ม
    while(n >= powF(10,k)){
        numdigit += k*9*powF(10,k-1);
        k++;
    }
    //ทำพวกเศษ
    numdigit += k*(n - powF(10,k-1)+1);

    return numdigit;
    // return ของช่วง 0 ถึง n
}
//ใช้วิธีนับหลักเอา เหมือนเขียนเลขติดกันละนับหลัก
    //[1-9 --> มีเลข 1หลัก 9 ตัว = 1*9 = เลขโดด 9 ตัว(หลัก)
    //[10-99 --> มีเลข 2หลัก 90ตัว = 2*90 = เลขโดด 180 ตัว(หลัก)]
    //[100-999 --> มีเลข 3หลัก 900ตัว = 3*900 = เลขโดด 2700 ตัว(หลัก)]

int main(){
    long long m,n;
    cin >> m >> n;
    cout << countNumDigit(n) - countNumDigit(m-1);
    

   
}