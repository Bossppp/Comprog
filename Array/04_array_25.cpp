#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h_cement[n];
    int water = 0;
    int sum = 0;

    //รับความสูงปูนแต่ละคอลัมน์
    for(int i=0;i<n;i++) {
        cin >> h_cement[i];
    }

    int right = n-1;
    int left = 0;
    int right_max = 0;
    int left_max = 0;

    while (left <= right) {
        water = 0;
        if (right_max < left_max) {
            water = max(0,right_max - h_cement[right]);
            if(right_max < h_cement[right]) {
                right_max = h_cement[right]; //update ค่าสูงสุดของปูนทางขวา
            }
            right--;
        } else {
            water = max(0,left_max - h_cement[left]);
            if(left_max < h_cement[left]) {
                left_max = h_cement[left]; //update ค่าสูงสุดของปูนทางซ้าย
            }
            left++;
        }
        
        sum += water;
    }

    cout << sum;

    return 0;
}