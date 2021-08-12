//  main.cpp
//  answer 2060 - Bino's Challenge uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
   int m2=0,m3=0,m4=0,m5=0,n,a[1001];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        m2++;
        
        if(a[i]%3==0)
        m3++;
        
        if(a[i]%4==0)
        m4++;
        
        if(a[i]%5==0)
        m5++;
    }
    cout<<m2<<" Multiplo(s) de 2"<<"\n";
    cout<<m3<<" Multiplo(s) de 3"<<"\n";
    cout<<m4<<" Multiplo(s) de 4"<<"\n";
    cout<<m5<<" Multiplo(s) de 5"<<"\n";
    return 0;
}
