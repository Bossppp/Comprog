#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findPrimeFactors(int n) {
    vector<int> primeFactors;
    
    // ตรวจสอบตัวประกอบ 2 ก่อน เพราะเป็นเลขคู่
    while (n % 2 == 0) {
        primeFactors.push_back(2);
        n /= 2;
    }
    
    // ตรวจสอบตัวประกอบจำนวนคี่ตั้งแต่ 3 ขึ้นไป
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            primeFactors.push_back(i);
            n /= i;
        }
    }
    
    // ถ้า n เป็นจำนวนเฉพาะและมากกว่า 2 ให้เพิ่ม n ลงในผลลัพธ์
    if (n > 2) {
        primeFactors.push_back(n);
    }
    
    return primeFactors;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> factors = findPrimeFactors(n);

    cout << "Prime factors: ";
    for (int factor : factors) {
        cout << factor << " ";
    }

    return 0;
}
