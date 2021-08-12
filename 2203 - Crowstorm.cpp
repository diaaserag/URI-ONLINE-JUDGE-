//  main.cpp
//  answer 2203 - Crowstorm uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int xf,yf,xi,yi,v,r1,r2,x1=0,y1=0;
    double m1,m2,m3,m;
    while(cin>>xf>>yf>>xi>>yi>>v>>r1>>r2)
    {
        x1=xf-xi;
        y1=yf-yi;
        m1=sqrt(pow(x1,2)+pow(y1,2));
        m2=r1+r2;
        m3=v*1.5;
        m=m1+m3;
        if(m>m2)
        cout<<"N"<<"\n";
        else
        cout<<"Y"<<"\n";
    }
    return 0;
}
