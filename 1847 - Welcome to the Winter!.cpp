//  main.cpp
//  answer 1847 - Welcome to the Winter! uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&b<=c)
    cout<<":)"<<"\n";
    else if((a<b&&b<c)&&(b-a)<=(c-b))
    cout<<":)"<<"\n";
    else if((a>b&&b>c)&&(a-b)>(b-c))
    cout<<":)"<<"\n";
    else if(a==b&&b<c)
    cout<<":)"<<"\n";
    else
    cout<<":("<<"\n";
    return 0;
}
