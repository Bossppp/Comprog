#include <vector>
#include <iostream>

using namespace std;

void printvec(vector<pair<string,double>> v){
    for(auto e : v){
        cout << e.first <<" " <<  e.second << endl;
    }
}

bool sortspecial (pair<string,double> a , pair<string,double> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    vector<pair<string,double>> product;
    string id;
    double cost;
    while(true){
        cin >> id;
        if(id == "END") break;
        cin >> cost;
        product.push_back({id,cost});
    }
    //printvec(product);

    vector<string> sale;
    string saleja;
    while(cin >> saleja){
        sale.push_back(saleja);
    }

    //finding same
    bool found = false;
    vector<pair<string,double>> top3sale;
    for(int i=0; i< product.size();i++){
        int cnt =0;
        for(int j=0;j<sale.size();j++){
            if(product[i].first == sale[j]){
                cnt++;
                found = true;
            }
            //cout << i << " " << j << " " << "count: " <<cnt << endl;
        }
        
        top3sale.push_back({product[i].first , product[i].second*cnt});
        //cout << "test" << endl;printvec(top3sale);
    }

    //printvec(top3sale);


    sort(top3sale.begin(),top3sale.end(),sortspecial);

    if(found){
        for(int i=0;i<3;i++){
            if(top3sale[i].second > 0){
                cout << top3sale[i].first << " " << top3sale[i].second << endl;
            }
            
        }
    }else{
        cout << "No Sales";
    }
}