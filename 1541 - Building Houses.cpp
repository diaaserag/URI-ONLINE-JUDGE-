//  main.cpp
//  answer 1541 - Building Houses uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d=0,f=0;
     while(cin>>a)
    {
        if(a==0)break;
        else{
               cin>>b>>c;
              d=a*b*100;
              d=d/c;
              f=sqrt(d);
              cout<<f<<"\n";
        }
    }
    return 0;
}
