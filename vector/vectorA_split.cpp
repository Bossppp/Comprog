#include <iostream>
#include <vector>
using namespace std;

void printvec (vector<string> v){
    for(auto e : v){
        cout << e << " ";
    }
}

vector<string> split(string line, char delimiter) {
    vector<string> v;
    string s = "";
    for(int i=0;i<line.size();i++){
        if(line[i] != delimiter){
            s += line[i];
            //if(i == line.size()-1) v.push_back(s);
        }else{
            if(!s.empty()){
                v.push_back(s);
                s.clear();
            }
        }
    }
    return v;
}

int main() {
 string line;
 getline(cin, line);
 string delim;
 getline(cin, delim);
 line += delim;
 for (string e : split(line, delim[0])) {
 cout << '(' << e << ')';
 }
}