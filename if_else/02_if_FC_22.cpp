#include <iostream>
using namespace std;

int main() {
    int d,m,y;
    cin >> d >> m >> y;
    y -= 543; //change BE to AD
    int n = 31; //กำหนดเริ่มด้วยเดือน "คม"
    if (m==4 || m==6 || m==9 || m==11) {
        //เดือนลงท้าย "ยน"
        n = 30;
    } else if(m==2) {
        //เดือนกุมภา
        n = 28;
        if (y%400 == 0){ //yAD หาร 400 ลงตัว
            n = 29;
        } if (y%4 ==0 && y%100 != 0){ //yAD หาร 4 ลงแต่หาร 100 ไม่ลง
            n = 29;
        }
    }
    d += 15;
    if (d>n) {
        d -= n;
        m++;
    } if (m>12) {
        m -= 12;
        y++;
    }
    y += 543; //return to yBE
    cout << d << "/" << m << "/" << y;


}