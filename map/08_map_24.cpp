#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void printvec(vector<pair<double,string>> v){
    for(auto &e : v){
        cout << e.second << " " << e.first << endl;
    }
}


int main(){
    map<string,pair<double,double>> product;
    int n;
    cin >> n;
    string goods;
    double price;
    for(int i=0; i<n;i++){
        cin >> goods >> price;
        product[goods] = {price,0};
    }
    int m;
    cin >> m;
    int count;
    double total = 0;
    bool found = false;
    for(int i=0; i<m;i++){
        cin >> goods >> count;
        double p = product[goods].first*count;
        product[goods].second += p;
        total += p;
    }
    if(total == 0){
        cout << "No ice cream sales";
    }else{
        cout << "Total ice cream sales: " << total << endl;
        vector<pair<double,string>> sale;
        for(auto p : product){
            sale.push_back({p.second.second,p.first});
        }
        sort(sale.rbegin(),sale.rend());
        //printvec(sale);
        vector<string> v;
        v.push_back(sale[0].second);
        for(int i=1; i<sale.size();i++){
            if(sale[i].first == sale[i-1].first){
                v.push_back(sale[i].second);
            }else{
                break;
            }
        }
        sort(v.begin(),v.end());
        cout << "Top sales: ";
        for(int i=0; i<v.size();i++){
            cout << v[i] << " ";
        }
    }

    
}