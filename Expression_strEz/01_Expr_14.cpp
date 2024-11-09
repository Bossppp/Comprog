#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int ad,be,y,DinW;
    cin >> be;

    ad = be - 543;
    y = ad % 100; //เอาเลขจาก ad มาแค่ 2 หลักท้าย

    int yinAb = floor(y/4);

    DinW = (y + yinAb + 11)%7;

    cout << DinW;
}