#include <iostream>
using namespace std;

int main() {
    int h;
    cin >> h;
    int base = 2*h-1;
    

    for (int i=1;i<=h;i++) {
        int dot = h-i;
        int star = base - 2*dot;

        for (int j = 1;j<=dot;j++) {
                cout << ".";
        }
        for (int k = 1; k <= star; k++) {
            if(k == 1 || k == star || i == h) { //ทำการให้ไส้ตรงกลางใส่จุด
                cout << "*";
            } else {
                cout << ".";
            }
                    
        }
        cout << endl;
    }
}