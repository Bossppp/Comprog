#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    int n;
    cin >> n;
    int m;
    while(n--){
        cin >> m;
        v1.push_back(m);
    }

    string line;
    cin.ignore();
    getline(cin,line);
    stringstream ss(line);
    int num;
    while(ss >> num){
        v2.push_back(num);
    }

    int x;
    cin >> x;
    while(x != -1){
        v3.push_back(x);
        cin >> x;
    }

    vector<int> sum;
    bool back = true;
    for(auto n : v1){
        if(back){
            sum.push_back(n);
        } else{
            sum.insert(sum.begin(),n);
        }
        back = !back;
    }
    for(auto n : v2){
        if(back){
            sum.push_back(n);
        } else{
            sum.insert(sum.begin(),n);
        }
        back = !back;
    }
    for(auto n : v3){
        if(back){
            sum.push_back(n);
        } else{
            sum.insert(sum.begin(),n);
        }
        back = !back;
    }

    //printing
    cout << "[";
    for(int i=0; i<sum.size();i++){
        cout << sum[i];
        if(i != sum.size()-1) cout << ", ";
    }
    cout<< "]";
}