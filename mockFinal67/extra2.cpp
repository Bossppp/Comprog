#include <iostream>

using namespace std;

void teki(int &tung1 , int &m1 , int &tung2 , int &m2){{
    int tae = min(m1,tung2);
    m1 -= tae;
    m2 += tae;  
}

}

int main(){
    int c1,c2,c3,m1,m2,m3;
    cin >> c1 >> m1;
    cin >> c2 >> m2;
    cin >> c3 >> m3;

    for(int i=0;i<(100/3);i++){
        teki(c1,m1,c2,m2);
        teki(c2,m2,c3,m3);
        teki(c3,m3,c1,m1);
    }
    teki(c1,m1,c2,m2); //last time
    
    cout << m1 << endl;
    cout << m2 << endl;
    cout << m3 << endl;

}