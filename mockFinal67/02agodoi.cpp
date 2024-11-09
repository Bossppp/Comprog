#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> v;
    unordered_set<long long> s;

    while(n--){
        int x;
        cin >> x;
        v.push_back(x);
        s.insert(x);
    }

    vector<long long> b;
    for(int i=0;i<v.size();i++){
        if(s.find(v[i]*2) != s.end()){
            b.push_back(1);
        }else{
            b.push_back(0);
        }
    }

    for(auto e : b){
        cout << e << " ";
    }
}