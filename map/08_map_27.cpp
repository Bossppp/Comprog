#include <iostream>
#include <map>
#include <sstream>

using namespace std;

map<char,string> t2k = {{'a',"2"},{'b',"22"},{'c',"222"},
                          {'d',"3"},{'e',"33"},{'f',"333"},
                          {'g',"4"},{'h',"44"},{'i',"444"},
                          {'j',"5"},{'k',"55"},{'l',"555"},
                          {'m',"6"},{'n',"66"},{'o',"666"},
                          {'p',"7"},{'q',"77"},{'r',"777"},{'s',"7777"},
                          {'t',"8"},{'u',"88"},{'v',"888"},
                          {'w',"9"},{'x',"99"},{'y',"999"},{'z',"9999"},
                          {' ',"0"}
                          };
map<string,char> k2t;

string keytotext(string key){
    for(auto &e : t2k){
        k2t[e.second] = e.first;
    }
    stringstream ss(key);
    string k;
    string text = "" ;
    while(ss >> k){
        text += k2t[k];
    }
    return text;
}

string texttokey(string text){
    string key = "";
    for(auto e : text){
        e = tolower(e);
        key += t2k[e];
        key += " ";
    }
    //cout << key << endl;
    return key.substr(0,key.size()-1);
}

int main(){
    string text;
    while(getline(cin,text)){
        string command = text.substr(0,3);
        string t = text.substr(4);
        //cout << t << " ";
        if(command == "K2T"){
            cout << ">> " << keytotext(t) << endl;
        }else if(command == "T2K"){
            cout << ">> " << texttokey(t) << endl;
        }
    }
    //texttokey("hello world");
}