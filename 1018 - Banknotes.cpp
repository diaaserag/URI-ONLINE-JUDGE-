//  main.cpp
//  answer 1018 - Banknotes uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int n,a=1,c,d,e,f,g,h,i,j,k,l,m,o;
    cin>>n;
    cout<<n<<"\n";
    a=n/100;
    cout<<a<<" nota(s) de R$ 100,00"<<"\n";
    c=n-a*100;
    d=c/50;
    cout<<d<<" nota(s) de R$ 50,00"<<"\n";
    e=n-a*100-d*50;
    f=e/20;
    cout<<f<<" nota(s) de R$ 20,00"<<"\n";
    g=n-a*100-d*50-f*20;
    h=g/10;
    cout<<h<<" nota(s) de R$ 10,00"<<"\n";
    i=n-a*100-d*50-f*20-h*10;
    j=i/5;
    cout<<j<<" nota(s) de R$ 5,00"<<"\n";
    k=n-a*100-d*50-f*20-h*10-j*5;
    l=k/2;
    cout<<l<<" nota(s) de R$ 2,00"<<"\n";
    m=n-a*100-d*50-f*20-h*10-j*5-l*2;
    o=m/1;
    cout<<o<<" nota(s) de R$ 1,00"<<"\n";
    return 0;
}
