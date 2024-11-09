#include <iostream>
#include <string>
using namespace std;

int main() {
    string hint,ans;
    getline(cin,hint);
    getline(cin,ans);
    int score = 0;

    for (int i=0;i<hint.length(); i++) {
        if(hint[i]==ans[i]) {
            score++;
            //check ว่าถ้าคำตอบกับเฉลยตรงกันให้คะแนนเพิ่ม 1
        }
    }
    if(ans.length()!=hint.length()){
        cout << "Incomplete answer";
    } else {
        cout << score;
    }
   
}