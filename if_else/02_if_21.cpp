#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double value;
    cin >> value;

    if (value >= 1000 && value < 10000){
        cout << round((value/1000)*10)/10 << "K";
    } else if (value >= 10000 && value < 1000000) {
        cout << round(value/1000) << "K"; //case of หมื่นขึ้นไม่เกินแสน เราจะไม่ round ติดทศนิยม 1 ตำแหน่ง
    } else if (value >= 1000000 && value < 10000000) {
        cout << round((value/1000000)*10)/10 << "M";
    } else if (value >= 1e7 && value < 1e9)  {
        cout << round(value/1e6) << "M"; //case of สิบล้านขึ้นไม่เกินพันล้าน เราจะไม่ round ติดทศนิยม 1 ตำแหน่ง
    } else if (value >= 1000000000 && value < 1e10) {
        cout << round((value/1000000000)*10)/10 << "B";
    } else if (value >= 1e10) {
        cout << round(value/1e9) << "B"; //case of หมื่นล้านขึ้น เราจะไม่ round ติดทศนิยม 1 ตำแหน่ง
    } else {
        cout << value; //พวกค่าไม่ถึง 1000
    }
}