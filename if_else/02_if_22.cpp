#include <iostream>
using namespace std;

int leapyear(int year) {
    year -= 543;
    if (year%4==0 && year%100!=0 || year%400==0) {
        return 1;
    }
    else{
        return 0;
    }
    // ถ้าเป็นอธิกสุรทิน ออกค่า 1
}

int main() {
    int d,m,y;
    cin >> d >> m >> y;
    //y -= 543;
    int dayinmonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int sumday = 0;
    for(int i=0;i<m-1;i++) {
        sumday += dayinmonth[i];
        //cout << sumday << endl;
    }
    // if (m > 2) {
    //     if(y%400 == 0 || y%4==0 && y%100!=0){
    //         d+=1;
    //     }
    // }
    if (m > 2) sumday+=leapyear(y);
    cout << sumday+d;
}