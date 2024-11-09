#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string x;
    cin >> x;
    x += "$";
    string y = x;

    vector<string> v;
    for(int i=0;i<y.length();i++){
        string rotate;
        rotate = y.substr(i,string::npos) + y.substr(0,i);
        cout << rotate << endl;
        v.push_back(rotate);
    }

    sort(v.begin(),v.end());
    string bwt ="";
    for(int i=0;i<v.size();i++){
        bwt += v[i][y.length()-1]; //เข้าถึง string ตัวที่ lenght-1 ใน vector ตัวที่ i
    }
    cout << bwt;
}