#include <iostream>
#include <set>

using namespace std;

void testprint(set<int> s){
    for(auto c : s){
        cout << c << " ";
    }
}

int main(){
    int k;
    cin >> k;
    cin.ignore();
    
    string line;
    getline(cin,line);
    string num = "";
    set<int> s;
    int count = 0;
    line += " ";

    for(auto c : line){
        if(c != ' '){
            num += c;
        }else{
            int n = stoi(num);
            if(s.find(n) == s.end()){
                s.insert(k-n);
            }else{
                count++;
                //cout << count << endl;
            }
            num = "";
        }
    }
    cout << count;
    
    
}