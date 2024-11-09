#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int n;
    cin >> n;
    v.push_back(n);
    while (n != 1){
        if(n % 2 ==0){
            n /= 2;
            
        } else {
            n = 3*n + 1; 
                  
        }
        v.push_back(n);
    }

    int vsizeExten15 = v.size() - 15;
    int count = 0;
    for(int i= max(vsizeExten15,0); i<v.size();i++){
        if(count == 0){
            cout << v[i];
        }else {
            cout << "->" << v[i];
        }
        count++;
    }
}