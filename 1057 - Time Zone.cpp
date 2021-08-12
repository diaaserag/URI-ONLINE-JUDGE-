//  main.cpp
//  answer 057 - Time Zone uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==0)
    a=24;
    c=a+b+c;
    if(c>=24)
    {
      c-=24;
      cout<<c<<"\n";
    }
    else
    cout<<c<<"\n";
    return 0;
}
