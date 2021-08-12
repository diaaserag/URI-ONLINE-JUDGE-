//  main.cpp
//  answer 2006 - Identifying Tea uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int n,a[10],c=0;
    cin>>n;
    for(int i=0;i<5;i++)
    cin>>a[i];
    for(int i=0;i<5;i++)
    {
        if(a[i]==n)
        c++;
    }
    cout<<c<<"\n";
    return 0;
}
