#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main() {
  // 1. Input
  // 1.1 Input product
  vector<pair<string, double>> product;
  string id;
  double price;
  while (true) {
    cin >> id;
    if (id == "END")
      break;
    cin >> price;
    product.push_back(make_pair(id, price));
  }
  // 1.2 Input sale
  vector<string> sale;
  string saleId;
  while (cin >> saleId) {
    sale.push_back(saleId);
  }

  // 2. Check top3 sale
  bool found = false;
  vector<pair<string, double> > top3;
  for (int i = 0; i < product.size(); i++) {
    int count = 0;
    for (int j = 0; j < sale.size(); j++) {
      if (product[i].first == sale[j]) {
        count++;
        found = true;
      }
      //cout << i << " " << j << " " << "count: " << count << endl;
    }
    top3.push_back(make_pair(product[i].first, product[i].second * count));
  }
  
  sort(top3.begin(),top3.end(),[](pair<string,double> a, pair<string,double> b){
      return a.second > b.second;
  });

  // 3. Print top3
  if (found) {
    //int existingSize = min(3, (int)top3.size());
    for (int i = 0; i < 3; i++) {
      if(top3[i].second > 0) {
        cout << top3[i].first << " " << top3[i].second << endl;
      }
      
    }
  } else {
    cout << "No Sales" << endl;
  }
}