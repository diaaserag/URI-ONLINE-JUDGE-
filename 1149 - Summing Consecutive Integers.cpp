//  main.cpp
//  answer 1149 - Summing Consecutive Integers uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int x,y,c=0;
     cin>>x>>y;
    while(y<=0){
     cin>>y;}
     for(int i=x;i<x+y;i++)
       {
           c+=i;
       }
       cout<<c<<"\n";
       c=0;
    return 0;
}
