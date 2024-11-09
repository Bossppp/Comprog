#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void show(vector<string> v, string free){
    string out = "";
    for(auto e : v){
        if(e != free) out += e + ", ";
    }
    cout << out.substr(0,out.size()-2) << endl; // ตัด , ตัวสุดท้ายออก
    // cout << endl;
}

bool issubset(vector<string> a, vector<string> b){ //subset is ทุกตัวใน a อยู่ใน b
    for(auto e : a){
        if(find(b.begin(),b.end(), e) == b.end()){
            return false; // == b.end() แปลว่า ไม่มี หรือหาไม่เจอนั่นแหละ
        }
    }
    return true;
}

int main(){
    vector<vector<string>> bingo;
    char BINGO[5];
    string t;
    for(int i=0; i<5;i++) cin >> BINGO[i];
    vector<string> s;

    //Create bingo board
    //row
    for(int i=0;i<5;i++){
        s.clear();
        for(int j=0;j<5;j++){
            cin >> t;
            s.push_back(BINGO[j]+t);
        }
        bingo.push_back(s);
    }
    //column
    for(int j=0;j<5;j++){
        s.clear();
        for(int i=0; i< 5;i++){
            s.push_back(bingo[i][j]);
        }
        bingo.push_back(s);
    }
    //ตะแคง
    //บนลงล่าง
    s.clear();
    for(int i=0;i<5;i++){
        s.push_back(bingo[i][i]);
    }
    bingo.push_back(s);
    //ล่างขึ้นบน
    s.clear();
    for(int i=0;i<5;i++){
        s.push_back(bingo[4-i][i]);
    }
    bingo.push_back(s);

    //for(auto e : bingo) show(e);

    //Check bingo
    vector<string> caller = {bingo[2][2]}; //กำหนดตัวฟรีเริ่มต้นมาให้ (* in board)
    int n = 0;
    bool gotBingo = false;
    while(cin >> t){
        caller.push_back(t);
        n++;
        for(auto b : bingo){
            if(issubset(b,caller)){
                if(!gotBingo){
                    cout << n << endl;
                }
                gotBingo = true;
                show(b , bingo[2][2]);
            }
        }
        if(gotBingo) break;
    }
    
}