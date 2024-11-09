#include <set>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void anagram(string &s,int index,set<string> &anag){
    if(index == s.length()){
        anag.insert(s); //มีตัวเดียวเก็บ
        return;
    }

    for(int i=0;i<s.length();i++){
        swap(s[index],s[i]); //สลับ
        anagram(s,index+1,anag);
        swap(s[index],s[i]); //สลับกลับรอวนใหม่
    }


}

int main(){
    string word;
    cin >> word;

    sort(word.begin(),word.end());
    set<string> ana;
    anagram(word,0,ana);

    for(auto a : ana){
        cout << a << " ";
    }
}