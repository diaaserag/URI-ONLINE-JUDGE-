//  main.cpp
//  answer 1103 - Alarm Clock uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes
#include<iostream>
using namespace std;
int main()
{
    int a,b,aa,bb,aaa=0,bbb=0,resalt=0;
    while(cin>>a>>b>>aa>>bb){
        if(a+b+aa+bb==0)
        break;
    if(a==0)
    a=24;
    if(aa==0)
    aa=24;
    aaa=(aa-a);
    if(aaa<0)
    aa+=24;
    if(aaa==0&&bb-b>0)
    aa=aa;
    else if(aaa==0&&bb-b<=0)
    aa+=24;
    aaa=aa-a;
    aaa*=60;
    bbb=bb-b;
    resalt=aaa+bbb;
    cout<<resalt<<"\n";
   }
    return 0;
}

