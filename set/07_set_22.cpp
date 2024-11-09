#include <set>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

void testsepsets(vector<set<int>> &sets){
    for(int i=0; i<sets.size(); i++){
        cout << "Set " << i+1 << ": ";
        for(auto e : sets[i]){
            cout << e << " ";
        }
        cout << endl;
    }
}

void printset(set<int> s){
    if(s.empty()){
        cout << "empty set" << endl;
    }else {
        for(auto e : s){
            cout << e << " ";
        }
        cout << endl;
    }
}

int main(){
    //1.Input
    //1.1 separate each set by newline
    vector<set<int>> sets;
    string line;
    while(getline(cin, line)){
        set<int> temp;
        istringstream iss(line);
        int x;
        while(iss >> x){
            temp.insert(x);
        }
        sets.push_back(temp);

    }
    //testsepsets(sets);

    set<int> unionset,intersec,diff;
    bool firstime = true;
    bool firstimeD =true;
    for(auto s : sets){
        //union
        for(auto e : s){
            unionset.insert(e);
        }
        //intersec
        if(intersec.empty() && firstime){
            intersec = s;
            // printset(intersec);
            // cout << endl;
            firstime = false; //ถ้าไม่ใช่ตัวแรกที่เอาเข้าก็แตก
        }
        else {
            set<int> temp;
            for(auto e : s){
                if(intersec.find(e) != intersec.end()){
                    temp.insert(e);
                }
                //printset(temp);
            }
            intersec = temp;
        }
        //diff
        if(diff.empty() && firstimeD){
            diff = s;
            firstimeD = false;
        }
        else {
            for(auto e : s){
                if(diff.find(e) != diff.end()){
                    diff.erase(e);
                }
            }
        }

    }

    cout << "U: "; printset(unionset);
    cout << "I: "; printset(intersec);
    cout << "D: "; printset(diff);

}