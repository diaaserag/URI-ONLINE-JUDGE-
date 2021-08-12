//  main.cpp
//  answer 1132 - Multiples of 13 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    if(n>m)
    {
        for(int i=m;i<=n;i++)
        {
            if(i%13!=0)
            sum+=i;
        }
    }
    else
    {
         for(int i=n;i<=m;i++)
         {
            if(i%13!=0)
            sum+=i;
         }
    }
    cout<<sum<<"\n";
    
    return 0;
}
