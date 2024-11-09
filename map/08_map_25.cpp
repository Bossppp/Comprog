#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void printmap(map<string,set<string>> m){
    for(auto i : m){
        cout << i.first << ": ";
        for(auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }
}

void printvec(vector<string> v){
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    map<string,set<string>> humanID; //คนนี้ไปไหนบ้าง
    map<string,set<string>> town; //เมืองนี้ใครมาบ้าง
    vector<string> idnum;
    string id,location;
    while(n--){
        cin >> id;
        idnum.push_back(id);
        cin >> location;
        while(location != "*"){
            humanID[id].insert(location);
            town[location].insert(id);
            cin >> location;
        }
    }
    // printmap(humanID);
    // printmap(town);
    //printvec(idnum);
    
    string keyID;
    cin >> keyID;
    bool found = false;
    for(auto id : idnum){
        if(id == keyID) continue; //เป็นตัวเองข้ามไป
        for(auto loc : humanID[keyID]){
            if(town[loc].find(id) != town[loc].end()){
                cout << ">> " << id << endl;
                found = true;
                break;
            }
        }
    }
    if(!found) cout << ">> Not Found";
}