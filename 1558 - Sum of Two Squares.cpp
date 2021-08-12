//  main.cpp
//  answer 1558 - Sum of Two Squares uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a[10000],num,x=0;
    while(cin>>num)
    {
        if(num==0)
        {
            cout<<"YES"<<"\n"; x=100;
        }
        for(int i=0;i*i<=num;i++)
        a[i]=i*i;
        for(int i=0;i*i<num;i++)
           for(int j=i;j*j<=num;j++)
              {
                  if(a[i]+a[j]==num)
                  { cout<<"YES"<<"\n"; x=100;i=100000; break;}
              }
              if(x!=100)
              cout<<"NO"<<"\n";
              x=0;
    }
    return 0;
}

