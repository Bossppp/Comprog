#include <iostream>
#include <string>
using namespace std;

int cardToInt(string c){
    int value;
    if(c == "A") value = 0;
    if(c == "2") value = 2;
    if(c == "3") value = 3;
    if(c == "4") value = 4;
    if(c == "5") value = 5;
    if(c == "6") value = 6;
    if(c == "7") value = 7;
    if(c == "8") value = 8;
    if(c == "9") value = 9;
    if(c == "10") value = 10;
    if(c == "J") value = 10;
    if(c == "Q") value = 10;˜
    if(c == "K") value = 10;

    return value;
}

int main(){
    int a,b;
    cin >> a >> b;
    string playerA[a];
    string playerB[b];

    for(int j=0; j<a;j++){
            cin >> playerA[j];
    }

    for(int k=0; k<b; k++){
            cin >> playerB[k];
    }
    
    int sumA = 0;
    int sumB = 0;

    for(int i=0;i<a;i++){
        if(playerA[i] == "A" && ((sumA + 11) <= 21)){
            sumA += 11;
        }else if(playerA[i] == "A" && ((sumA + 11) > 21)) {
            sumA += 1;
        }
        //cout << "i: " << i << "| " << sumA << endl ;
        sumA += cardToInt(playerA[i]);
        //cout << "i: " << i << " A :> " << sumA << " " << endl;
        /*if(sumA >= 21){
            break;
        }*/
        

    }

    for(int i=0;i<b;i++){
        if(playerB[i] == "A" && ((sumA + 11) < 21)){
            sumB += 11;
            //i++;
        }else if(playerB[i] == "A" && ((sumB + 11) > 21)){
            sumB += 1;
            //i++;
        }
        //cout << "i: " << i << "| " << sumB << endl ;
        sumB += cardToInt(playerB[i]);
        //cout << "i: " << i << " B :> " << sumB << " " << endl;
        /*if(sumB >= 21){
            break;
        }*/
        
    }

    //output
    if(sumA == sumB){
        cout << "Draw" << endl;
        cout << sumA << " " << sumB;
        return 0;
    }else if(sumA > 21 && sumB > 21){
        cout << "Draw" << endl;
        cout << sumA << " " << sumB;
        return 0;
    }
    else if(sumA > sumB){
        if(sumA > 21){
            cout << "B" << endl;
            cout << sumA << " " << sumB;
            return 0;
        }else{
            cout << "A" << endl;
            cout << sumA << " " << sumB;
            return 0;
        }
        
    }else if(sumB > sumA){
        if(sumB > 21){
            cout << "A" << endl;
            cout << sumA << " " << sumB;
            return 0;
        }else{
            cout << "B" << endl;
            cout << sumA << " " << sumB;
            return 0;
        }
        
    }

    //cout << sumA << " " << sumB;
    


}