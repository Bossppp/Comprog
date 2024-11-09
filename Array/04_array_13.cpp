#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    float list[n];
    int count = 0;

    for (int i=0;i<n;i++) {
        cin >> list[i]; //เก็บข้อมูลลง list
    }
    
    //checking peak is ตัวนั้นต้องมากกว่าตัวก่อนหน้าและตัวถัดไป
    for (int i=1;i<n-1;i++) { //n-1 เพราะไล่ตาม index
        if (list[i] > list[i-1] && list[i] > list[i+1]) {
            count++;  
        }
    }
    cout << count;
}