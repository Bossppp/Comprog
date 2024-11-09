#include <iostream>
#include <string>

using namespace std;

bool isPrime(long long n){
    if(n<2) return false;
    for(long long i = 2;i<n;i++){
        if(n % i == 0){
            return false;
        } else {
            return true;
        }
    }
}

int main(){
    int k;
    cin >> k;
    int rle[k][4];

    for(int i=0; i<k; i++){
        for(int j=0; j<4; j++){
            cin >> rle[i][j];
            //cout << rle[i][j];
        }
    }

    string rleConvert = "";
    for(int i=0; i<k; i++){
        int A = rle[i][0];
        int N = rle[i][1]; //count of A
        int B = rle[i][2];
        int M = rle[i][3]; //count of B

        //convert rle to number
        rleConvert += string(N,A+'0');
        rleConvert += string(M,B+'0');
        
        //cout << rleConvert << " ";
        
        //check Is rlePrime?
        long long rlecheck = stoll(rleConvert);
        if(isPrime(rlecheck)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
        rleConvert = ""; //reset when change number
    }
    
}