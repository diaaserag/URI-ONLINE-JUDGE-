//  main.cpp
//  answer 1585 - Making Kites uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x,a,b,m=0;;
    cin>>x;
    while(x--)
    {
        cin>>a>>b;
        m=(a*b)/2;
        cout<<m<<" cm2"<<"\n";
    }
    return 0;
}
