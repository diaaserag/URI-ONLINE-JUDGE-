//  main.cpp
//  answer 1858 - Theon's Answer uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int n,a[150],c=22,resalt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]<c)
        {
            resalt=i;
            c=a[i];
        }
    }
    cout<<resalt+1<<"\n";
    return 0;
}

