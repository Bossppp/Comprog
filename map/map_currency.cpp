#include <map>
#include <iostream>

using namespace std;

int main(){
    map<string,double> currency;
    currency["THB"] = 1;
    int n;
    cin >> n;
    string cur;
    double rate;
    while(n--){
        cin >> cur >> rate;
        currency[cur] = rate;
    }

    string from,to;
    int money;
    cin >> money >> from;
    cout << money << " " << from;
    while(cin >> to){
        if(from == "THB"){
            money = money / currency[to];
        }else if(to == "THB"){
            money = money*currency[from];
        }else{
            money = money*currency[from]/currency[to];
        }

        cout << " -> " << money << " " << to << " ";
        from = to;
    }

}