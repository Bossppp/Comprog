#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin >> n;
    v.push_back(n);
    while(n != 1){
        if(n%2 == 0){
            n /= 2;
        }else{
            n = (3*n)+1;
        }
        v.push_back(n);
    }

    int sizemore15 = v.size()-15;
    int cnt = 0;
    //ให้แสดง 15 ตัวสุดท้าย ถ้าไม่ถึง ก็แสดงตาม size()
    for(int i= max(sizemore15,0); i< v.size();i++){
        cout << v[i];
        if(i != v.size()-1) cout << "->";
    }
}