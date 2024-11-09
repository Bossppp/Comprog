#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;
// int F(int n) { // Fibonacci number
//     vector<int> v(n+1);
//     v[0] = 0;
//     v[1] = 1;
//     for(int i=2;i<=n;i++){
//         v[i] = v[i-2] + v[i-1];
//     }
//     return v[n];    
// }

// int F(int n){
//     if(n==0 || n==1) return n;
//     if(n >= 2){
//         return F(n-1) + F(n-2);
//     }
// }

int F(int n){ 
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n %2 == 0){
        int m = n/2;
        return (2*F(m-1) + F(m)) * F(m);
    }else{
        int m = (n+1)/2;
        return (F(m)*F(m)) + (F(m-1)*F(m-1));
    }
}
int M(int n) { // Motzkin number
    if(n == 0 || n == 1) return 1;
    int sum = M(n-1);
    if(n >= 2){
        for(int k=0;k<=n-2;k++){
            sum += M(k)*M(n-2-k);
        }
    }
    return sum;
}
int S(int n) { // Schröder–Hipparchus Number
    if(n==1 || n==2) return 1;
    if(n >= 3){
        return ((6*n-9)*S(n-1) - (n-3)*S(n-2))/n;
    }
}
int D(int n) { // Derangement
    if(n == 0) return 1;
    return n*D(n-1) + pow(-1,n);
}
int main() {
 map<string, int(*)(int)> func = {{"F",F}, {"M",M}, {"S",S}, {"D",D}};
 string fn;
 int p;
 while (cin >> fn >> p) {
 if (func.find(fn) != func.end())
 cout << fn << '(' << p << ") = " << func[fn](p) << endl;
 }
 return 0;
}