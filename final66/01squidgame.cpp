#include <iostream>
#include <vector>
#include <utility>
#include <sstream>

using namespace std;

void testprint(vector<pair<int,vector<int>>> v){
    for(auto e : v){
        cout << e.first << " ";
        for(auto mn : e.second){
            cout << mn << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,vector<int>>> v;
    int player;
    string moneyLine;
    while(n--){
        cin >> player; cin.ignore();
        getline(cin, moneyLine);
        istringstream ss(moneyLine);
        int money;
        vector<int> moneyeach;
        while(ss >> money){
            moneyeach.push_back(money);
        }
        v.push_back({player,moneyeach});
    }

    //testprint(v);

    int sum = 0;
    for(auto pl:v){
        int min = *min_element(pl.second.begin(),pl.second.end());
        for(auto mn : pl.second){
            sum += mn;
        }
        sum -= min;
        cout << sum << endl;
        sum = 0;
    }
}