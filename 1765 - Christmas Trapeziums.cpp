//  main.cpp
//  answer 1765 - Christmas Trapeziums uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x,a,b,c=0.0;
    int count;
    while(cin>>count&&count)
    {
        int i=0;
        while(count--)
        {
        cin>>x>>a>>b;
        c=(((a+b)/2)*5.0)*x;
        cout<<"Size #"<<++i<<":"<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Ice Cream Used: "<<c<<" cm2"<<endl;;
        }
        cout<<endl;
    }
    return 0;
}
