#include <iostream>
using namespace std;

bool queenfound (char q){
    //if ()
}

int main() {
    int n;
    cin >> n;
    char board[n][n];

    for (int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> board[i][j];
        }
    }

    for (int k=0;k<n;k++) {
        for(int o=0;o<n;o++){
            //board[k][o] = {'-'};
            cout << board[k][o];
        }
        cout << endl;
    }


}