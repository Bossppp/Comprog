#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int num;
    for(int i =0; i<5; i++){
        cin >> num;
        v.push_back(num);
    }
    //inserting elements in the vector
    sort(v.rbegin(), v.rend());

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}