#include <vector>
#include <iostream>
#include <utility>

using namespace std;

string upgrade(string g){
    vector<string> grade = {"A","B+","B","C+","C","D+","D","F"};
    for(int i=0;i<grade.size();i++){
        if(grade[i] == g){
            if(g == "A"){
                return "A";
            }else {
                return grade[i-1];
            }
        }
    }
    return "F";
}

int main(){
    vector<pair<string,string>> grade;
    string id,gd;
    while(true){
        cin >> id;
        if(id == "q") break;
        cin >> gd;
        if(id!="q")grade.push_back({id,gd});
    }

    string idUp;
    vector<string> toUpgrade;
    while (cin >> idUp){
        toUpgrade.push_back(idUp);
    }

    for(int i=0;i<toUpgrade.size();i++){
        for(int j=0;j<grade.size();j++){
            if(grade[j].first == toUpgrade[i]){
                //cout << i << " " << j << " " << grade[j].first << " " << toUpgrade[i] << endl;
                grade[j].second = upgrade(grade[j].second);
            }
        }
    }

    for(auto e : grade){
        cout << e.first << " " << e.second << endl;
    }

    

}