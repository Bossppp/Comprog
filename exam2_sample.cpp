#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

void printmap(map<int,set<string>> m){
    for(auto e : m){
        cout << e.first << " ";
        for(auto s : e.second){
            cout << s << " ";
        }
        cout << endl;
    }
}

void printmap2(map<string,int> m){
    for(auto e : m){
        cout << e.first << " " << e.second << endl;
    }
}

void printvec(vector<pair<int,set<string>>> v){
    for(auto e : v){
        cout << e.first << " ";
        for(auto s : e.second){
            cout << s << " ";
        }
    }
}

int main(){
    map<int,set<string>> score2std;
    map<string,int> std2score;
    int n;
    cin >> n;
    string st;
    int scr;
    while(n--){
        cin >> st >> scr;
        if(std2score.find(st) == std2score.end()){
            std2score[st] = scr;
        }else{
            std2score[st] = max(std2score[st],scr);
        }
        
    }

    for(auto st : std2score){
        scr = st.second;
        score2std[scr].insert(st.first);
    }
    // printmap2(std2score);
    // cout << endl;
    // printmap(score2std);
    vector<pair<int,set<string>>> v;
    for(auto sc : score2std){
        v.push_back({sc.first,sc.second});
    }
    sort(v.rbegin(),v.rend());
    //printvec(v);

    int m;
    cin >> m;
    for(int i=0;i<m && i<v.size();i++){
       auto sc = v[i];
       cout << sc.first << " ";
       for(auto s : sc.second){
            cout << s << " ";
       }
        cout << endl;
    }


}