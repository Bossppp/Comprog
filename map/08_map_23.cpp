#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

void testprint(map<string,int> m){
    for(auto e : m){
        cout << e.first << " : " << e.second << endl;
    }
}

void testprintV(vector<pair<string,int> > v){
    for(auto e : v){
        cout << e.first << " " << e.second << endl;
    }
}

int main(){
    string song,singer,type,time;
    map<string,int> typelist;
    while (cin >> song >> singer >> type >> time){
        //split time "min : sec"
        int index = time.find(":");
        int min = stoi(time.substr(0,index));
        int sec = stoi(time.substr(index+1));
        
        typelist[type] += min*60 + sec;
    }

    vector<pair<int,string> > v;
    for(auto e : typelist){
        v.push_back({e.second,e.first});
    }
    // testprint(typelist);
    // testprintV(v);
    sort(v.begin(),v.end());

    int size = v.size();
    for(int i=0 ; i<min(3,size) ; i++){
        cout << v[size-1-i].second << " --> " << v[size-1-i].first/60 << ":" << v[size-1-i].first%60 << endl;
    }

    

}