//  main.cpp
//  answer 2161 - Square Root of 10 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double temp=6,t=0;
    cin>>n;
    for(int i=1;i<n;i++)
     temp=6+(1.0/temp);
    cout<<setprecision(10)<<fixed;
    if(n>0)
    t=3+(1.0/temp);
    else
    t=3*1.0;
    cout<<t<<"\n";
    return 0;
}
