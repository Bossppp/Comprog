#include <map>
#include <set>
#include <iostream>

using namespace std;

void printmap(map<string,set<string>> m){
    for(auto p : m){
        cout << p.first << " : ";
        for(auto s : p.second){
            cout << s << " ";
        }
        cout << endl;
    }
}

int main(){
    map<string,set<string>> nextStation;
    string s1,s2;
    while(cin >> s1){
        if(!(cin >> s2)) break;
        //ถ้าไม่มีสถานีที่ติดกันให้สร้าง set ว่างๆ
        if(nextStation.find(s1) == nextStation.end()) nextStation[s1] = {};
        if(nextStation.find(s2) == nextStation.end()) nextStation[s2] = {};
        nextStation[s1].insert(s2);
        nextStation[s2].insert(s1);
    }

    //printmap(nextStation);

    set<string> cango = nextStation[s1]; //เริ่มด้วย set ของ สถานีที่ติดกับ s1
    cango.insert(s1); //กันcaseไม่ติดเลย

    for(auto st : nextStation[s1]){
        //ไล่ทุกๆสภานีที่ติดกับ s1 เพื่อทำขั้นต่อไป
        for(auto st2 : nextStation[st]){
            //ไล่ทุกๆสถานีที่ติดกับสถานี ที่ติดกับ s1
            cango.insert(st2);
        }
    }

    for(auto c : cango){
        cout << c << endl;
    }

}
