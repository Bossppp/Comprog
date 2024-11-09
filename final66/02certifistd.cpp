#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int> std2score;
    map<int,set<string>> score2std;
    while(n--){
        string st; int scr;
        cin >> st >> scr;
        if(std2score.find(st) == std2score.end()){
            std2score[st] = scr;
        }else{
            std2score[st] = max(scr,std2score[st]);
        }
    }

    //เก็บคนเรียงตามพจนานุกรม
    for(auto m : std2score){
        int sc = m.second;
        score2std[sc].insert(m.first);
    }

    //for sorting
    vector<pair<int,set<string>>> output;
    for(auto m : score2std){
        output.push_back({m.first,m.second});
    }

    sort(output.rbegin(),output.rend());

    int m;
    cin >> m;
    int size = output.size();
    for(int i=0;i< min(m,size);i++){
        cout << output[i].first << " ";
        for(auto s : output[i].second){
            cout << s << " ";
        }
        cout << endl;
    }
}