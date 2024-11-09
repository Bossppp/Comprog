#include <iostream>

using namespace std;

void printarray(int a[],int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}

void combinatoric(int a[],int n){
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            cout << "(" << a[i] << ", " << a[j] << ")" << " ";
        }
    }
}


int main(){
    int n;
    cin >> n;
    int board[n][n];

    int row_of0;
    //make table nxn
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
            if(board[i][j] == 0){
                row_of0 = i; //เก็บแถวที่ 0 อยู่
            }
        }
    }
    int rowSize = n*n-1;
    int arrTorow [rowSize];
    int atrIndex = 0;
    //convert table to row except 0
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == 0){
                continue; //founf 0 except 0
            } else {
                arrTorow[atrIndex] = board[i][j]; //put value from board to arrTorow
                atrIndex ++;
            }
        }
    }
    //printarray(arrTorow,rowSize);

    //counting inversion
    int inversion = 0;
    //จับคู่ด้วยการทำการเรียงสับเปลี่ยนของไม่ซ้ำ
    for(int i=0; i<rowSize; i++){
        for(int j=i+1; j<rowSize; j++){
            if(arrTorow[i] > arrTorow[j]){
                inversion++;
            }
            //cout << inversion << " ";
        }
    }
    //combinatoric(arrTorow,rowSize);
    // cout << endl;
    // cout << inversion << endl;
    

    //check can solve board??
    if(n%2 != 0 && inversion%2 == 0){
        cout << "YES";
    } else if(n%2 == 0 && inversion%2 != 0 && row_of0%2 == 0){
        cout << "YES";
    } else if(n%2 == 0 && inversion%2 == 0 && row_of0%2 != 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
}