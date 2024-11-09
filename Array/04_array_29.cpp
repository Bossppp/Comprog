#include <iostream>

using namespace std;

int overlaping(int pos1[], int pos2[]){
    int xleft = max(pos1[0],pos2[0]);
    int ybottom = max(pos1[1],pos2[1]);
    int xright = min(pos1[2],pos2[2]);
    int ytop = min(pos1[3],pos2[3]);

    if(xleft < xright && ybottom < ytop){
        return (xright - xleft) * (ytop - ybottom);
    } else {
        return 0;
    }
}

int main(){
    int n;
    int x1,y1,x2,y2;
    cin >> n;
    int rectangle[n][4];
    //make rectangle n item
    for (int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cin >> rectangle[i][j];
        }
    }

    //calculate max area
    int maxArea = 0;
    int overlapArray[n][n];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            overlapArray[i][j] = overlaping(rectangle[i], rectangle[j]);
            //it return value of overlap area
            if(overlapArray[i][j] > maxArea){
                maxArea = overlapArray[i][j];
                //update maxArea
            }
        }
    }

    //checking output
    if(maxArea == 0){
        cout << "No overlaps";
    } else {
        cout << "Max overlapping area = " << maxArea << endl;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(overlapArray[i][j] == maxArea){
                    cout << "rectangles " << i << " and " << j << endl;
                }
            }
        }
    }

    
}