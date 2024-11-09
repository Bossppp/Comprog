#include <iostream>
#include <string>

using namespace std;

int countingChar(string str1, string str2){
    int count = 0;
    for(int i=0; i< min(str1.size(),str2.size());i++){
        if(str1[i] == str2[i]){
            count++;
        }
    }
    return count;
}

int main(){
    string x,y;
    cin >> x >> y;

    int maxCount =0 , shiftX_best = 0, shiftY_best = 0;

    //shift x in y lenght
    for(int shiftIndex = 0;shiftIndex < y.size(); shiftIndex++){
        string shiftingX = string(shiftIndex,'-') + x;
        int matchar = countingChar(shiftingX,y);
        if(matchar > maxCount){
            maxCount = matchar;
            shiftX_best = shiftIndex;
            shiftY_best = 0;
        }
        //cout << maxCount << " " << shiftingX << endl;
    }

    //shift y in x lenght
    for(int shiftIndex = 0; shiftIndex < x.size(); shiftIndex++){
        string shiftingY = string(shiftIndex,'-') + y;
        int matchar = countingChar(shiftingY,x);
        if(matchar > maxCount){
            maxCount = matchar;
            shiftY_best = shiftIndex;
            shiftX_best = 0;
        }
        //cout << maxCount << " " << shiftingY << endl;
        
    }
    
    //output
    if(shiftX_best > 0){
        cout << string(shiftX_best,'-') + x << endl;
        cout << y << endl;
        cout << maxCount;
    } else if(shiftY_best > 0){
        cout << x << endl;
        cout << string(shiftY_best,'-') + y << endl;
        cout << maxCount;
    } else {
        cout << x << endl;
        cout << y << endl;
        cout << maxCount;
    }
}