//  main.cpp
//  answer 1133 - Rest of a Division uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m)
    {
        for(int i=m+1;i<n;i++)
        {
             if(i%5==2)
              cout<<i<<"\n";
             if(i%5==3)
                cout<<i<<"\n";
        }
    }
    else
    {
         for(int i=n+1;i<m;i++)
         {
                     if(i%5==2)
              cout<<i<<"\n";
              if(i%5==3)
                cout<<i<<"\n";
         }
    }
    
    return 0;
}
