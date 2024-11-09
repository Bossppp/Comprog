#include <vector>
#include <iostream>
#include <map>
#include <utility>
#include <unordered_map>
#include <algorithm>

using namespace std;

void printvec(vector<pair<string,string>> v){
    for(auto e : v){
        cout << e.first << " " << e.second << endl;
    }
}

string upgrade(string g){
    vector<string> grade = {"A","B+","B","C+","C","D+","D","F"};
    for(int i=0;i<grade.size();i++){
        if(g == grade[i]){
            if(g == "A"){
                return "A";
            }else{
                return grade[i-1];
            }
        }
    }
    return "F";
}

string downgrade(string g){
    vector<string> grade = {"A","B+","B","C+","C","D+","D","F"};
    for(int i=0;i<grade.size();i++){
        if(g == grade[i]){
            if(g == "F"){
                return "F";
            }else{
                return grade[i+1];
            }
        }
    }
    return "A";
}

unordered_map<string,double> grademaping{
    {"A",4},
    {"B+",3.5},
    {"B",3},
    {"C+",2.5},
    {"C",2},
    {"D+",1.5},
    {"D",1},
    {"F",0}
};

bool sortgrade(pair<string,string> a,pair<string,string> b){
    return grademaping[a.second] > grademaping[b.second];
}

int main(){
    vector<pair<string,string>> grade;
    string id,gd;
    int n;
    cin >> n;
    while(n--){
        cin >> id >> gd;
        grade.push_back({id,gd});
    }

    //printvec(grade);

    string idUp_down;
    while(cin >> idUp_down){
        char upDown = idUp_down[idUp_down.size()-1];
        idUp_down = idUp_down.substr(0,idUp_down.size()-1);
        //cout << "+: " << upDown << " -: " << upDown << " id: " << idUp_down << endl;
        for(int i=0;i<grade.size();i++){
            if(grade[i].first == idUp_down){
                if(upDown == '+'){
                    grade[i].second = upgrade(grade[i].second);
                }else if(upDown == '-'){
                    grade[i].second = downgrade(grade[i].second);
                }
            }
        }
    }
    // printvec(grade);
    // cout << endl;
    sort(grade.begin(),grade.end(),sortgrade);
    printvec(grade);

}
