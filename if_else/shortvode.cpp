#include<iostream>
int main(){int a[11]={31,59,90,120,151,181,212,243,273,304,334};int d,m,y;std::cin>>d>>m>>y;y-=543;d+=a[m-2];if(m>2&&(y%400==0||(y%4==0&&y%100!=0)))d++;std::cout<<d;}
