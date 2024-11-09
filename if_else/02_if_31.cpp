#include <iostream>
#include <cmath>
using namespace std;

int leapyear(int y) {
    y -= 543;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) return 1;
    return 0;
    //เดือนกุมภามี 29 วัน
}

int main() {
    int db,mb,yb,di,mi,yi;
    cin >> db >> mb >> yb >> di >> mi >> yi;
    int DinM [12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    double phy,emo,intel;
    int redl,blackl,bluel;
    redl = 0 , bluel = 0 , blackl = 0;
    
    //ทำเส้นแดง
    for (int i= mb-1; i<12; i++){
            redl += DinM[i];
        }
    if (mb <= 2){redl += leapyear(yb);}
    redl -= db;

    //ทำเส้นน้ำเงิน
    for (int i=0; i<mi-1; i++){
            bluel += DinM[i];
    }
    if (mi >= 3){bluel += leapyear(yi);}
    bluel += di;

    //ทำเส้นดำ
    blackl = (yi - yb - 1)*365;
    int tfrombirth = redl + blackl + bluel;

    phy = sin(tfrombirth*2*M_PI/23);
    emo = sin(tfrombirth*2*M_PI/28);
    intel = sin(tfrombirth*2*M_PI/33);

    cout << tfrombirth << " " << round(phy*1e2)/1e2 << " " << round(emo*1e2)/1e2 << " " << round(intel*1e2)/1e2;

}