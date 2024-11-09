#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int fee[n];
    string country[n];
    int cost =0;

    //รับข้อมูลประเทศกับภาษีเข้า
    for (int i=0;i<n;i++) {
        cin >> country[i] >> fee[i];
    }

    string next_airport,first_airport;
    cin >> first_airport; //กำหนดสนามบินเริ่มต้น
    first_airport = first_airport.substr(4,2); //เอามาแค่ประเทศ

    while (cin >> next_airport) {
        next_airport = next_airport.substr(4,2);
        //ถ้าสนามบินคนละประเทศให้คำนวณค่าภาษี
        if (first_airport != next_airport) {
            for (int i=0;i<n;i++){
                if(next_airport == country[i]){
                    cost += fee[i];
                    break; //หาเจอแล้วให้หยุดหา
                }
            }
        } first_airport = next_airport; //update สนามบิน
    }
    cout<<cost;



}
