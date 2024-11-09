#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a < 100){
        while(b < c){
            a += pow(b, 2) + pow(c, 2);
            if( a%10 == 5){
                break;
            } else{
                if(a%2 == 0){
                    b++;
                } else {
                    c--;
                }
                if(a / (b*c) > 20){
                    break;
                }
            }
        }
    } else {
        if(a < b){
            if(b < c){
                a += 3;
                b = a+c;
                c = b+a;
            }else{
                if(a < c){
                    a *= 2;
                    b += a;
                    c += b;
                } else {
                    a += c;
                    b *= 2;
                    c = b -a;
                }
            }
        } else{
            if(c > a){
                a = 3 * b;
                b = c+a;
                c = a+b;
            }else {
                if(b > c){
                    a = b+c;
                    b = 7*a;
                    c = b-a;
                }else {
                    a = c-5;
                    b = a-b;
                    c = 3*b;
                }
            }
        }
    }
    cout << a << " " << b << " " << c;
}