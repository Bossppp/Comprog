#include <iostream>
using namespace std;

int main() {
    int h1,m1,s1,h2,m2,s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    int t1 = h1*3600 + m1*60 + s1; //ให้ทุกอย่างอยู่ในหน่วย second
    int t2 = h2*3600 + m2*60 + s2;

    int ds,dm,dh;
    ds = (t2 - t1+24*3600)%24*3600; //ผลออกมายังอยู่ในหน่วย second
    //ds = (ds+24*3600)%(24*3600); // +(24*3600) คือบวก 24hr ขจัดความเป็นลบที่อาจเกิด ส่วน %(24*3600) ทำให้เวลาอยู่ในช่วง (0-23)

    dh = ds/3600; //ทำ ds ให้เป็นหน่วย hr
    ds -= dh*3600; //update ค่า ds โดยเอาค่าความต่างชั่วโมงออก
    dm = ds/60; //ทำ ds ให้เป็นหน่วย min
    ds -= dm*60; //update ค่า ds โดยเอาค่าความต่างนาทีออก

    cout << dh << ":" << dm << ":" << ds;
}