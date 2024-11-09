#include <iostream>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

void printmap(map<string,vector<int>> &m){
    for(auto &p : m){
        cout << p.first << ": ";
        for(auto &i : p.second){
            cout << i << " ";
        }
        //cout << endl;
    }
}

int main(){
    int n;
    cin>>n;
    map<string,vector<int>> team12scr;
    map<string,vector<int>> team22scr;
    vector<int> scoretemp1;
    vector<int> scoretemp2;
    int score1,score2;
    string team1,team2,linescr;
    while(n--){
        cin >> team1 >> team2;
        cin.ignore();
        getline(cin,linescr);
        linescr = linescr.substr(0,linescr.size()-1);
        stringstream ss(linescr);
        string score;
        while(ss >> score){
            int k = score.find('-');
            string sc1 = score.substr(0,k);
            string sc2 = score.substr(k+1,score.size());
            score1 = stoi(sc1);
            score2 = stoi(sc2);
            scoretemp1.push_back(score1);
            scoretemp2.push_back(score2);
        }
        team12scr[team1] = scoretemp1;
        team22scr[team2] = scoretemp2;
        // cout << team1 << " " << team2 << " " << score1 << " " << score2 << endl;


    }

    // printmap(team12scr);
    // cout << endl;
    // printmap(team22scr);
    bool win1 = false;
    bool win2 = false;
    bool isduce = false;
    int countwin1 = 0;
    int countwin2 = 0;
    for(auto t1 : team12scr){
        for(auto t2 : team22scr){
            for(int i=0;i<t1.second.size();i++){
                if(t1.second[i] == 25 && t2.second[i] < 25){
                    win1 = true;
                    countwin1++;
                }else if(t1.second[i] < 25 && t2.second[i] == 25){
                    win2 = true;
                    countwin2++;
                }else if(t1.second[i] == 24 && t2.second[i] == 24){
                    isduce = true;
                }

                if(isduce){
                    if(t1.second[i]-t2.second[i] == 2){
                        win1 = true;
                    }else if(t2.second[i]-t1.second[i] == 2){
                        win2 = true;
                }

                if(countwin1 == 3){
                    //win
                    cout << "* "<< t1.first << " " << countwin1 << " ";
                    cout << "[ ";
                    for(auto i : t1.second){
                        cout << i << " ";
                    }
                    cout << "]";
                    cout << endl;
                    //lose
                    cout << t2.first << " " << countwin2 << " ";
                    cout << "[ ";
                    for(auto i : t2.second){
                        cout << i << " ";
                    }
                    cout << "]";
                    cout << endl;
                    break;
                }else if(countwin2 == 3){
                    //win
                    cout << "* " << t2.first << " " << countwin2 << " ";
                    cout << "[ ";
                    for(auto i : t2.second){
                        cout << i << " ";
                    }
                    cout << "]";
                    cout << endl;
                    //lose
                    cout << t1.first << " " << countwin1 << " ";
                    cout << "[ ";
                    for(auto i : t1.second){
                        cout << i << " ";
                    }
                    cout << " ]"; 
                    cout << endl;
                    break;
                }
        }
    }
}
}