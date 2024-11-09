#include <iostream>
#include <cmath>
#include <utility>
#include <string>

using namespace std;

double gradeTovalue(string g){
    double result;
    if(g == "A") result = 4;
    if(g == "B+") result = 3.5;
    if(g == "B") result = 3;
    if(g == "C+") result = 2.5;
    if(g == "C") result = 2;
    if(g == "D+") result = 1.5;
    if(g == "D") result = 1;
    if(g == "F") result = 0;
    return result;
}

void testprint(pair<string,int> p[], int n) {
    for(int i=0;i <n; i++){
        cout << p[i].first << " " << p[i].second << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pair<string , int> grade[n];
    for(int i=0;i <n; i++){
        cin >> grade[i].first >> grade[i].second;
    }

    //testprint(grade,n);

    //sum Weight
    double sumWeight = 0;
    for(int i=0;i < n; i++){
        sumWeight += grade[i].second;
        //cout << sumWeight << endl;
    }
    //sum Grade
    double sumGradeAndWeight = 0;
    for(int i=0; i<n; i++){
        sumGradeAndWeight += (gradeTovalue(grade[i].first) * grade[i].second);
        //cout << sumGradeAndWeight << endl;
    }

    double gpa = (sumGradeAndWeight) / sumWeight;
    cout << round(gpa*100)/100;

}