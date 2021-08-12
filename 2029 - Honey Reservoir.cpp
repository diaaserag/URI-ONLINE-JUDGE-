//  main.cpp
//  answer 2029 - Honey Reservoir uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double v,d,r1=0.0,r2=0.0,r=0.0;
    while(cin>>v>>d)
    {
        d=d/2;
        r=d*d;
        r1=(v/(3.14*r));
        r2=3.14*r;
        cout<<setprecision(2)<<fixed;
        cout<<"ALTURA = "<<r1<<"\n";
        cout<<"AREA = "<<r2<<"\n";
    }
    return 0;
}
