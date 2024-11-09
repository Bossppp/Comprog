#include <bits/stdc++.h>

using namespace std;

bool checkInput (string snook){
    //check ตัวแรก R
    if (snook[0] != 'R') return false;
    //check R ห้ามคู่ โดยดูไปทีละคู่
    for(int i=0; i<snook.size(); i+=2){
        if(snook[i] == 'R'){
            if(snook[i+1] == 'R'){
                return false;
            }
        //check pattern 'YGNBPK'
        } else if (snook[i] == 'Y'){
            string colorPattern = "YGNBPK";
            int patternIndex = 0;
            for(int j=i; j<snook.size(); j++){
                
                if(patternIndex == colorPattern.size()){
                        return false;
                }
                if(snook[j] == colorPattern[patternIndex]){
                    patternIndex++;
                    

                } else{
                    return false;
                }   
            }
            return true;
        } else{
            return false;
        }
    }
    return true;
}

int scoreCal (string snook){
    int score = 0;
    for(int i=0;i<snook.size();i++){
        if(snook[i] == 'R') score += 1;
        if(snook[i] == 'Y') score += 2;
        if(snook[i] == 'G') score += 3;
        if(snook[i] == 'N') score += 4;
        if(snook[i] == 'B') score += 5;
        if(snook[i] == 'P') score += 6;
        if(snook[i] == 'K') score += 7;
    }
    return score;
}

string striped(string snook){
    string strip = "";
    for(int i=0;i<snook.size();i++){
        if(snook[i] != ' '){
            strip += snook[i];
        }
    }
    return strip;
}

int main(){
    int N;
    cin >> N;
    cin.ignore();
    for(int i=0; i<N; i++){
        string snook;
        getline(cin,snook);
        snook = striped(snook);
        if(checkInput(snook)){
            cout << scoreCal(snook) << endl;
        } else {
            cout << "WRONG_INPUT" << endl;
        }
    }
}