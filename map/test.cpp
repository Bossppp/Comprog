#include <iostream>
#include <map>
#include <vector>

using namespace std;

void printvec(vector<string> v){
    for(int i=0;i<v.size();i++){
        cout << v[i];
        if(i != v.size()-1){
            cout << ", ";
        }
    }
    cout << endl;
}

void printmap(map<string,vector<string>> m){
    cout << "-----------------------------"<< endl;
    for(auto e : m){
        cout << e.first << " : "; printvec(e.second);
    }
}

int main(){
    map<string,vector<string>> whosing;
    string line,singer,song;
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin,line);
        //spliting line
        int index = line.find(',');
        song = line.substr(0,index);
        singer = line.substr(index+2);
        //cout << "---test---" << song << " " << singer << endl;
        whosing[song].push_back(singer);
    }
    //printmap(whosing);
    
    //checking whosing
    getline(cin,line);
    line+= ", ";
    for(int i=0;i<line.size();i++){
        if(line[i] == ','){
            //cout << "i: " << i << endl;
            song = line.substr(0,i);
            //cout << "i: " << i << "\tsong: " << song << endl;
            if(whosing.find(song) != whosing.end()){
                cout << song << " -> "; printvec(whosing[song]);
            }else{
                cout << song << " -> Not Found" << endl;
            }
            //cout << "before line i: " << i << "\tline: " << line << endl;
            line = line.substr(i+2);
            //cout << "line: " << line << endl;
            i = 0;
        }
    }
    
}