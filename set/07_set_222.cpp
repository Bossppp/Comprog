#include <iostream>
#include <set>
#include <vector>
#include <sstream>

using namespace std;

void printset(set<int> s){
    if(s.empty()){
        cout << "empty set" << endl;
    }else{
        for(auto &e : s){
            cout << e << " ";
        }
        cout << endl;
    }
}

int main(){
    //1.input
    vector<set<int>> sets;
    string line;
    while(getline(cin,line)){
        set<int> temp;
        istringstream iss(line);
        int x;
        while(iss >> x){
            temp.insert(x);
        }
        sets.push_back(temp);
    }

    //2.Process
    set<int> unionset,intersec,differnt;
    bool firsttime = true;
    bool firsttimeDif = true;
    for(auto s : sets){
        //union
        for(auto e : s){
            unionset.insert(e);
        }
        //intersect
        if(intersec.empty() && firsttime){
            intersec = s;
            firsttime = false;
        }else{
            set<int> temp;
            for(auto e : s){
                if(intersec.find(e) != intersec.end()){
                    temp.insert(e);
                }
            }
            intersec = temp;
        }
        //different
        if(differnt.empty() && firsttimeDif){
            differnt = s;
            firsttimeDif = false;
        }else{
            for(auto e : s){
                if(differnt.find(e) != differnt.end()){
                    differnt.erase(e);
                }
            }
        }
    }
    cout << "U: ";printset(unionset);
    cout << "I: ";printset(intersec);
    cout << "D: ";printset(differnt);
}