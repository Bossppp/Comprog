#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> v1;
    
    for(int i=0;i<n;i++){
        string s[5];
        cin >> s[0] >> s[1] >> s[2];
        sort(s,s+3);
        
        string temp = s[0] + " " + s[1] + " " + s[2];
        v1.push_back(temp);
    }
    
    int maxcount = 0;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(v1[i] == v1[j]){
                count++;
                //cout << count << endl;
            }
        }
        if(count > maxcount){
            maxcount = count;
        }
    }

    cout << maxcount;

}
