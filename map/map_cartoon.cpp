#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    map<string,vector<string>> typeofchar;
    string type,cha;
    vector<string> typeani;
    while(cin >> cha >> type){
        if(typeofchar.find(type) == typeofchar.end()){
            typeani.push_back(type);
        }
        typeofchar[type].push_back(cha);
    }

    for(auto e : typeani){
        cout << e << ": ";
        for(auto m : typeofchar[e]){
            cout << m << " ";
        }
        cout << endl;
    }

}