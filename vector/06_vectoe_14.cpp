#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> diff;
    int num;
    while(cin>>num){
        diff.push_back(num);
    }
    
    //print(diff);

    vector<int> sorteddiff = diff;
    sort(sorteddiff.begin(),sorteddiff.end());
    
    //  print(sorteddiff);
    vector<int> diffCollect;
    int count = 0;
    for(int i=0; i < sorteddiff.size(); i++){
        if(sorteddiff[i] != sorteddiff[i+1]){
            diffCollect.push_back((sorteddiff[i]));
            count++;

        }
    }
    cout << count << endl;
    if(count <= 10){
        print(diffCollect);
    } else{
        for(int i=0; i<10;i++){
            cout << diffCollect[i] << " ";
        }
    }
}
