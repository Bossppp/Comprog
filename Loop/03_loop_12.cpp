#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,u;
    double l = 0;
    cin >> a;
    u = a;
    double x = (l+u)/2;

    //"ไม่ใกล้" มันก็ต้องเป็นนิเสธของฟังก์ชันนี้ |𝑎 − 𝑥2| ≤ 1e−10*max (𝑎, 𝑥2) เป็นจาก <= เป็น > !!แต่นี่สำหรับหา squareroot
    //ตัว 1e−10*max (𝑎, 𝑥2) เป็นค่าคงที่ในสูตรการหา "ความใกล้"
    //ตัวที่จะเปลี่ยนคือข้างหน้า if want to find sqrt --> |a - pow(x,2)|     if want to find log10 |a - pow(10,x)|

    //finding ค่าเลขของ sqrt มันต้องใช้ inverse of function(sqrt) that it from (x**1/2)**2 == x
    //finging ค่าเลขของ log10 มันต้องใช้ inverse of function(log10) that it from 10**(log10(a)) == a
    while (abs(a - pow(10,x)) > 1e-10*max(a,pow(x,2)))  {
        //cout<< x << '\n'; 
        //check looping
        if (pow(10,x) > a) {
            u = x;
        } else if (pow(x,2) < a) {
            l = x;
        }
        x = (l+u)/2;
    } 
    cout << x;
}