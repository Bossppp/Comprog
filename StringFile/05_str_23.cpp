#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    int m;
    string plate;
    getline(cin, plate);
    cin >> m;
    int last3num = stoi(plate.substr(4,3));
    char preNum = plate[0];
    char firstchar = plate[1];
    char secondchar = plate[2];

    last3num += m;
    

    while(last3num>999){
        last3num -= 1000;
        if(secondchar < 'Z'){
            secondchar++;
        } else {
            secondchar = 'A';

            if(firstchar < 'Z'){
                firstchar++;
            } else {
                firstchar = 'A';
                preNum++;
            }
        }
    }
    // string newPlate = preNum + string(1, firstchar) + string(1, secondchar) + '-' + to_string(last3num);
    // cout << newPlate;
    cout << preNum << firstchar << secondchar << '-' << setfill('0') << setw(3) << last3num << endl;

}