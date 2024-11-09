#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 2;

    while (n >= k){ //ทำลูปจน k > n
        if (n%k == 0){
            n /= k; //หารลงแล้วให้เอา k ไปหาร n แล้วอัพเดทค่า n
            cout<<k;
            if (n >= k) {
                cout << "*"; //ถ้า k ยังไม่มากกว่า n ให้ พิมพ์ * ต่อตูด k ข้างบน
            }
        } else {
            k++; //ถ้าหารไม่ลงตัวให้เพิ่มค่า k เรื่อยๆ
        }
    }
}