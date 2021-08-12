//  main.cpp
//  answer 1026 - To Carry or not to Carry uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    unsigned long long a,b,c=0;
    while(cin>>a>>b)
    {
        c=(a ^ b);
        cout<<c<<"\n";
    }
    return 0;
}
