#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

int sum(vector<int> s){
    int sum = 0;
    for(auto i : s){
        sum += i;
    }
    return sum;
}

//เจอกล่องที่ใส่ไม่เกิน 100 ก็ใส่เลย
vector<vector<int>> firstFit(vector<int> d){
    vector<vector<int>> contain;
    for(auto i : d){
        bool add = false;
        for(auto &j : contain){
            if(sum(j) + i <= 100){ //limit แต่ละกล่องที่ 100
                j.push_back(i);
                add = true;
                break;
            }
        }
        if(!add) contain.push_back({i});
    }
    return contain;
}

//ลองจับใส่ทุกกล่อง แล้วเลือกกล่องที่มีค่่าใกล้ 100 สุด
vector<vector<int>> bestFit(vector<int> d){
    vector<vector<int>> contain;
    for(auto i : d){ //หยิบ i มาลองใส่กล่องว่า fit ไหนสุด
        int minRest = 100;
        int minIndex = -1;
        for(int j=0; j<contain.size() ; j++){
            int sumRest = 100 - (sum(contain[j]) + i); 
            if(sumRest >= 0 && sumRest < minRest){
                minRest = sumRest; //ยิ่งน้อยแสดงว่ายิ่งใกล้ 100 ขึ้น
                minIndex = j;
            }
        }
        if(minIndex == -1){
            contain.push_back({i}); //ไม่มีกล่องไหนที่ใส่ได้ สร้างกล่องใหม่
        }else{
            contain[minIndex].push_back(i);
        }
    }
    return contain;
}


void printResult(vector<vector<int>> contain){
    //sort ตามเงื่อนไงนี้ {{1.sumใกล้ 100 สุด}, {2.จำนวนกล่องน้อยสุด} ,{3.ค่าในกล่องน้อยสุด}}
    //{{100-sum},{size},{value}}
    vector<tuple<int,int,vector<int>>> sortContain;
    for(auto i : contain){
        sort(i.begin(),i.end());
        sortContain.push_back({100-sum(i),i.size(),i});
    }
    sort(sortContain.begin(),sortContain.end());

    //print
    for(auto i : sortContain){
        for(auto j : get<2>(i)){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    string choice;
    cin >> choice;
    vector<int> data;
    int n;
    while(cin >> n){
        data.push_back(n);
    }
    if(choice == "first"){
        printResult(firstFit(data));
    }else if(choice == "best"){
        printResult(bestFit(data));
    }
}