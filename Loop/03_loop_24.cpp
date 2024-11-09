#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 1;

    //Type1
    // for (int i=1; i<=s.size(); i++){ 
    //     if(s[i] == s[i-1]){
    //         count++;
    //     } else {
    //         cout << s[i-1] << " " << count << " ";
    //         count = 1;
    //     }
    // }

    //Type2
    for (int i=0; i<s.size(); i++){
        int cnt = 1;
        while(s[i] == s[i+1]){
            cnt++;
            i++;
        }
        cout << s[i] << " " << cnt << " ";
    }
    //โดราเอม่อร
}