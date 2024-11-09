#include <iostream>
#include <set>

using namespace std;

int main(){
    set<string> winner;
    set<string> loser;
    string win,lose;
    while(cin >> win >> lose){
        winner.insert(win);
        loser.insert(lose);
    }

    set<string> realwin;
    for(auto w : winner){
        if(loser.find(w) == loser.end()){
            realwin.insert(w);
        }
    }
    if(realwin.size() == 0) cout << "None";
    for(auto r : realwin){
        cout << r << " ";
    }
}