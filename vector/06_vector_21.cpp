#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<string> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    cout << endl;
}

int main(){
    //input string
    string x;
    cin >> x;
    //print(x);

    //let y be a copy of x + $
    string y = x + "$";
    //print(y);

    //rotate y
    vector<string> rotate;
    for(int i=0; i<y.size();i++){
        //rotate to left 1 step
        string temp = y.substr(i) + y.substr(0,i); //เอา str ตั้งแต่ i ไปจนถึงสุด แล้วเอา str ตั้งแต่ 0 ไปจนถึง i
        /*
        akainu$
        kainu$a
        ainu$ak
        */
        rotate.push_back(temp);

    }
    //print(rotate);

    sort(rotate.begin(),rotate.end());
    //print(rotate);

    //print the last char
    string bwt = "";
    for(int i=0;i<rotate.size();i++){
        bwt += rotate[i][y.size()-1];
    }

    cout << bwt << endl;
    
    
}