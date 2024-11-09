#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

void printVector(vector<int> v){
    cout << "[";
    if(!v.empty()){
        for(int i=0; i<v.size(); i++){
        cout << v[i];
            if(i != v.size()-1){
            cout << ", ";
            }
        }
    }
    cout << "]";
}

int main(){
    vector<int> v1; //part1
    vector<int> v2; //part2
    vector<int> v3; //part3
    vector<int> vSum;
    
    //part1
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0; i < n; i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    
    //part2
    string line;
    int k;
    getline(cin, line);
    stringstream ss(line); //frac the getline with white space
    while(ss >> k){
        v2.push_back(k);
    }

    //part3
    int z;
    cin >> z;
    while(z != -1){
        v3.push_back(z);
        cin >> z;
    }

    bool addBack = true;
    for(int num : v1){
        if(addBack){
            vSum.push_back(num);
        } else {
            vSum.insert(vSum.begin(), num);
        }
        addBack = !addBack;
    }

    for(int num : v2){
        if(addBack){
            vSum.push_back(num);
        } else {
            vSum.insert(vSum.begin(), num);
        }
        addBack = !addBack;
    }

    for(int num : v3){
        if(addBack){
            vSum.push_back(num);
        } else {
            vSum.insert(vSum.begin(), num);
        }
        addBack = !addBack;
    }

    printVector(vSum);

}
