#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int row,coloumn;
    cin >> row >> coloumn;
    double arr[row][coloumn];
    

    for (int i=0;i<row;i++) {
        for (int j=0;j<coloumn;j++) {
            cin >> arr[i][j];  //รับค่าเข้ามาใน arr
        }
    }
    for (int i=0;i<row-2;i++) { //กำหนดขอบเขตของการวนลูป ตาม row
        for (int j=0;j<coloumn-2;j++) { //กำหนดขอบเขตของการวนลูป ตาม coloumn
            double sum = 0;
            for (int k=i;k<i+3;k++) { // วนลูปตาม row 3 ตัว
                for (int l=j;l<j+3;l++) { // วนลูปตาม coloumn 3 ตัว
                    sum += arr[k][l];
                }
            } cout << round((sum/9)*1e2)/1e2 << " ";
        } 
        cout << endl;         
    }


}