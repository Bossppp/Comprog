#include <iostream>

using namespace std;

int main() {
    string num1digit[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string num2digit1[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string num2digit2up[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string num3digitup[] = {"hundred", "thousand", "million", "billion", "trillion"};


    unsigned long long n;
    cin >> n;

    if (n < 10) {
        cout << num1digit[n];

    } else if(n >= 10 && n < 20) {
        cout << num2digit1[n-10];

    } else if(n >= 20 && n < 100) {
        cout << num2digit2up[n/10-2];

        if (n%10 != 0) {
            cout << " " << num1digit[n%10];
        }

    } else if(n >= 100 && n < 1000) {
        cout << num1digit[n/100] << " " << num3digitup[0]; //บอกว่าอยู่หลักร้อย

        if (n%100 != 0){

            if(n%100 < 10){
                cout << " " << num1digit[n%100]; //หลักหน่วยของร้อย

            } else if(n%100 >= 10 && n%100 < 20){
                cout << " " << num2digit1[n%100 - 10]; //หลักสิบของรอยที่ไม่เกิน 19

            } else if(n%100 >= 20) {
                cout << " " << num2digit2up[(n%100)/10 - 2];
                
                if (n%10 != 0) {
                    cout << " " << num1digit[n%10];
                }
            }
        }

    } else if(n >= 1000 && n < (int)1e6) {
        if(n >= 1000 && n < (int)1e4) { //1000-9999
            cout << num1digit[n/1000] << " " << num3digitup[1];
            if (n%1000 != 0){

            if(n%1000 < 10){
                cout << " " << num1digit[n%100]; //หลักหน่วยของพัน

            } else if(n%1000 >= 10 && n%1000 < 20){
                cout << " " << num2digit1[n%1000 - 10]; //หลักสิบของพันที่ไม่เกิน 19

            } else if(n%1000 >= 20 && n%1000 < 100) { //หลักสิบที่20ขึ้น แต่ไม่ถึง 100
                cout << " " << num2digit2up[(n%1000)/10 - 2];
                
                if (n%10 != 0) {
                    cout << " " << num1digit[n%10];
                }
            } else if(n%1000 >= 100 && n%1000 < 1000) { //หลักร้อย
                cout << " " << num1digit[] << ""
                
            }
            }

        } else if(n >= (int)1e4 && n < (int)2e4){
            cout << num2digit1[n/1000 - 10] << " " << num3digitup[1];
            if (n%1000 != 0){

            if(n%1000 < 10){
                cout << " " << num1digit[n%100]; //หลักหน่วยของพัน

            } else if(n%1000 >= 10 && n%100 < 20){
                cout << " " << num2digit1[n%100 - 10]; //หลักร้อยของพันที่ไม่เกิน 199

            } else if(n%1000 >= 20) {
                cout << " " << num2digit2up[(n%100)/10 - 2];
                
                if (n%10 != 0) {
                    cout << " " << num1digit[n%10];
                }
            }
            }
        }
    }
}