#include <vector>
#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;
    vector<long long> num;
    long long n;
    while(cin >> n){
        num.push_back(n);
    }
    long long count = 0;
    for(int i=0;i<num.size();i++){
        for(int j=i+1;j<num.size();j++){
            if(num[i] + num[j] == k){
                count++;
                // cout << num[i] << "," << num[j] << " ";
                // cout << endl;
            }
        }
    }
    cout << count;
}