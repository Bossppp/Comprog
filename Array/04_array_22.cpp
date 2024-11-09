#include <iostream>
#include <string>
using namespace std;

//แสดงการ์ด
void printary(string a[], int size) {
    for(int i=0; i<size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    string card[n];
    string cardOp1[n/2];
    string cardOp2[n/2];

    //ใส่เลขไพ่ก่อนตัด
    for (int i=0;i<n;i++) {
        cin >> card[i];
    }

    string operate;
    //cin >> operate;
    cin.ignore(); //ต้องใช้เพราะมีการรับตัวอื่นก่อนหน้าทำให้มันรับ "enter" เข้ามา
    getline(cin, operate); // !!ใช้ได้แต่ต้องใช้ cin.ignore() ก่อนเพราะรมีการรับตัวอื่นก่อนหน้าทำให้มันรับ "enter" เข้ามา
    
    for (char c : operate) {
        //ตัดไพ่
        if (c == 'C') {
            for (int i=0;i<n/2;i++) {
                cardOp1[i] = card[i];
            } //แบ่งการ์ดกองบน
            for (int i=n/2;i<n;i++) {
                cardOp2[i-n/2] = card[i];
            } //แบ่งการ์ดกองล่าง
            for (int i=0;i<n;i++) {
                card[i] = (i< n/2) ? cardOp2[i] : cardOp1[i-n/2];
            }
           
        }
        //สลับไพ่
        if (c == 'S') {
            for (int i=0;i<n/2;i++) {
                cardOp1[i] = card[i];
            } //แบ่งการ์ดกองบน
            for (int i=n/2;i<n;i++) {
                cardOp2[i-n/2] = card[i];
            } //แบ่งการ์ดกองล่าง
            for (int i=0;i<n;i++) {
                card[i] = (i%2 == 0) ? cardOp1[i/2] : cardOp2[i/2]; //เอาการ์ดกองล่างมาใส่ตำแหน่งคู่
            }

        }  
    }
    printary(card, n);
    
}

