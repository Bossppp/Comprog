#include <iostream>
#include <map>
#include <vector>


using namespace std;

int main(){
    map<long long,long long> x;
    map<long long,long long> h;
    long long M,K,a,b;
    cin >> M >> K >> a >> b;
    while(M--){
        long long index,val;
        cin >> index >> val;
        x[index] = val;
    }
    while(K--){
        long long index,val;
        cin >> index >> val;
        h[index] = val;
    }

    vector<long long> y;
    long long sum =0;
    for(long long i = a; i <= b ;i++){
        for(long long k = 0; k <= 1000; k++){
            sum += x[k]*h[i-k];
        }
        y.push_back(sum);
        sum = 0;
    }

    for(auto e : y){
        cout << e << " ";
    }
    

    
}