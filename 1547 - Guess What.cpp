//  main.cpp
//  answer 1547 - Guess What uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,count,s,a[1000],temp=100000,resalt=0;
    cin>>count;
       while(count--)
       {
           cin>>num>>s;
           for(int i=0;i<num;i++)
           {
               cin>>a[i];
               if(abs(s-a[i])<temp)
               {
                   temp=abs(s-a[i]);
                   resalt=i+1;
               }
           }
               cout<<resalt<<"\n";
               temp=100000;
       }
    return 0;
}
