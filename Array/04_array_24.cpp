#include <iostream>
#include <algorithm>

using namespace std;

void printarray(int a[],int n){
    for (int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void flipping(int a[],int n){
    int start = 0;
    while (start < n){
        swap(a[start],a[n]);
        start++;
        n--;
    }
}

void flipping2(int a[],int n){
    for(int i=0; i<n ;i++){
        swap(a[i],a[n]);
        n--;
    }
}


int main(){
    int n;
    cin >> n;
    int sorted[n] , notsort[n];

    for (int i=0; i<n; i++){
        cin >> notsort[i];
    }
    printarray(notsort,n); //ก่อน sort

    copy(notsort, notsort + n, sorted);

    bool sortleaw = true;
    for (int i=1 ; i<n ;i++){
        if(sorted[i] < sorted[i-1]){
            sortleaw = false;
        }
    }
    //cout << sortleaw << endl;

    //check ว่าเรียงยัง
    if(!sortleaw){
        for (int i = n - 1; i >= 0; i--) {
            // หาตัวมากสุด
            int maxIndex = 0;
            for (int j = 0; j <= i; j++) {
                if (sorted[j] > sorted[maxIndex]) {
                    maxIndex = j;
                }
            }

            // ถ้าตัวมากสุดไม่อยู่ล่างสุด
            if (maxIndex != i) {
                // ถ้าตัวมาไม่อยู่บน สลับตัวมากไว้บน
                if(maxIndex > 0){
                    flipping2(sorted,maxIndex);
                    printarray(sorted,n);
                }

                // สลับตัวไปเรื่อยๆจนเรียงถูก
                flipping2(sorted,i);
                printarray(sorted,n);
            } 
        }
    } else {
        return 0;
    }


    
}