#include <iostream>
#include <string>
using namespace std;


int main() {
    char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                         'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char alphabetUp[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M',
                         'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    string text;
    getline(cin,text);
    int count[26] = {0};

    for(int i=0;i<text.size();i++) {
        for(int j=0;j<26;j++) {
            if(text[i]==alphabet[j] || text[i]==alphabetUp[j]) { //อักษรตัวใหญ่ตัวเล็ก ก็นับเป็นตัวเดียวกัน
                count[j]++;
            }
        }
    }
    for(int i=0;i<26;i++) {
        if(count[i]!=0) { //ถ้ามีตัวอักษรนั้นๆ ให้แสดงผล
            cout << alphabet[i] << " -> " << count[i] << endl;
        }
    }
}

/*
array 2 อันเก็บตัวอักษรภาษาอังกฤษพิมพ์เล็ก ใหญ่
เก็บ input
loop check input ว่าตัวอักษรนั้นว่าตรงกับ array ที่เก็บไว้มั้ย
นับว่าตัวอักษรนั้นมีกี่ตัว
ถ้ามีตัวนั้นก็แสดงผล
*/