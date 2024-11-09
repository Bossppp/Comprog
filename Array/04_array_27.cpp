#include <climits>
#include <iostream>
#include <limits.h>
#include <string>

using namespace std;


int main(){
    int n;
    cin >> n;
    cin.ignore();

    int x[n] , y[n];
    for (int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    int maxVa = INT_MIN;
    int minVa = INT_MAX;

    string command;
    cin >> command;

    if (command == "Zig-Zag"){
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                maxVa = max(y[i],maxVa);
                minVa = min(x[i],minVa);
            } else{
                maxVa = max(x[i],maxVa);
                minVa = min(y[i],minVa);
            }
        }
    } else if (command == "Zag-Zig"){
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                maxVa = max(x[i],maxVa);
                minVa = min(y[i],minVa);
            } else{
                maxVa = max(y[i],maxVa);
                minVa = min(x[i],minVa);
            }
        }
    }

    cout << minVa << " " << maxVa;

}

/*
zigzag : find min from x ไล่คี่(index คุ๋) y ไล่คู่(index คี่) max from x ไล่คู่(index คี่) y ไล่คี่(index คู่)

zagzid : find min from x ไล่คู่(index 1 3 5 ..) y ไล่คี่(index 0 2 4 ..) max from x ไล่คี่(index 0 2 4 ..) y ไล่คู่(index 1 3 5 ..)
*/

