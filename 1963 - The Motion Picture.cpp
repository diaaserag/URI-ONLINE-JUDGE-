//  main.cpp
//  answer 1963 - The Motion Picture uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,d=0.0,resalt=0.0;
    cin>>a>>b;
    d=b-a;
    resalt=(d*100.00)/a;
    cout<<setprecision(2)<<fixed;
    cout<<resalt<<"%"<<"\n";
    return 0;
}
