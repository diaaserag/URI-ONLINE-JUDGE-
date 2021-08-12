//  main.cpp
//  answer 2147 - Galopeira uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<string>
#include<cstring>
#include <stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    int z=0,co=0,b=0;
    float a;
    char s[10009];
    cin>>co;
    while(co--)
    {
    cin.getline(s,10004);
    z=strlen(s);
        a=z*0.01;
        b++;
        cout<<setprecision(2)<< fixed ;
        if(b>1)
        cout<<a<<"\n";
        else
        co++;
        }
    return 0;
}
