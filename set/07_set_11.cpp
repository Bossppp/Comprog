#include <iostream>
#include <set>

using namespace std;

int main(){
    multiset<char> m;
    multiset<char> m2;
    string line;
    string line2;
    getline(cin,line);
    getline(cin,line2);
    for(auto c : line){
        c = tolower(c);
        if(c != ' '){
            m.insert(c);   
        }
    }
    for(auto c : line2){
        c = tolower(c);
        if(c != ' '){
            m2.insert(c);
        }
    }

    if(m == m2){
        cout << "YES";
    }else{
        cout << "NO";
    }
}