#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int> m;
    for(int i=0;i<n;i++){
        string s[3];
        cin >> s[0] >> s[1] >> s[2];
        sort(s,s+3);
        string temp = s[0] + " " + s[1] + " " + s[2];
        m[temp]++;
    }

    // for(auto e : m){
    //     cout << e.first << " " << e.second << endl;
    // } 

    int maxcount = 0;
    for(auto e : m){
        if(e.second > maxcount){
            maxcount = e.second;
        }
    }

    cout << maxcount;
}