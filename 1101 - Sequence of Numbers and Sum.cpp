//  main.cpp
//  answer 1101 - Sequence of Numbers and Sum uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int n,m,a[1000];
    long long sum=0;
    while(cin>>n>>m)
    {
        if(n<=0||m<=0)
        break;
        else if(n>m)
        {
         for(int i=m;i<=n;i++)
         {
             a[i]=i;
            sum+=a[i];
         }
         for(int i=m;i<=n;i++)
         {
            cout<<a[i]<<" ";
         }
         cout<<"Sum="<<sum<<"\n";
        }
        else
        {
          for(int i=n;i<=m;i++)
         {
             a[i]=i;
            sum+=a[i];
         }
         for(int i=n;i<=m;i++)
         {
            cout<<a[i]<<" ";
         }
         cout<<"Sum="<<sum<<"\n";
        }
        sum=0;
    }
    return 0;
}
