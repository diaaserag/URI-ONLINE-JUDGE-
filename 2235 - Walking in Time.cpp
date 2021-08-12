//  main.cpp
//  answer 2235 - Walking in Time uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b||a==c||c==b)
     cout<<"S"<<"\n";
     else if(a+b==c||a+c==b||c+b==a)
     cout<<"S"<<"\n";
     else
     cout<<"N"<<"\n";
    return 0;
}
