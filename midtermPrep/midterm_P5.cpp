#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  int timeline[1441] = {0};
  //vector<int> timeline(1440, 0);

  for (int i = 0; i < n; i++) {
    int start, stop;
    cin >> start >> stop;
    // find fill time in timeline
    for(int j=start; j<stop; j++){
      timeline[j]++;
      //cout << "start: " << start << " stop: " << stop << " time: " << timeline[j] << endl;
    }
  }

  int curUser = 0;
  int maxUser = 0;

  for (int i = 1; i <= 1440; i++) {
    curUser = timeline[i];
    //cout << curUser << " ";
    if(curUser > maxUser){
      maxUser = curUser;
    }
  }

  cout << maxUser;
}