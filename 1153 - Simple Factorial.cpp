//  main.cpp
//  answer 1153 - Simple Factorial uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x;
    long long c=1;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        c*=i;
    }
    cout<<c<<"\n";
    return 0;
}
