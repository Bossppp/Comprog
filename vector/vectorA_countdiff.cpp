#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int n;
    while(cin >> n){
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    //checkingDiff
    int count =0;
    vector<int> diff;
    for(int i=0;i<v.size();i++){
        if(v[i] != v[i+1]){
            count++;
            diff.push_back(v[i]);
        }
    }
    // for(auto e : diff){
    //     cout << e << " ";
    // }

    //outout
    cout << count << endl;
    //ให้แสดงเฉพาะ 10 ตัวแรก ถ้าไม่ถึง ก็แสดงตาม size()
    int size = diff.size();
    for(int i=0; i< min(size,10);i++){
        cout << diff[i] << " ";
    }
}