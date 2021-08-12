//  main.cpp
//  answer 1536 - Libertadores uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int count,a1,a2,b1,b2;
    char s;
    cin>>count;
    while(count--)
    {
        cin>>a1>>s>>b1;
        cin>>b2>>s>>a2;
        if((a1>b1&&a2>b2)||(a1==b1&&a2>b2)||(a1>b1&&a2==b2)||(a1==b1&&a2==b2&&a2>b1)||(a1>b1&&b2>a2&&a1+a2>b1+b2)||(a1<b1&&b2<a2&&a1+a2>b1+b2)||(b2>a2&&a1>b1&&b1<a2)||(b1>a1&&a2>b2&&a2>b1))
        cout<<"Time 1"<<"\n";
        else if((a1<b1&&a2<b2)||(a1==b1&&a2<b2)||(a1<b1&&a2==b2)||(a1==b1&&a2==b2&&a2<b1)||(a1>b1&&b2>a2&&a1+a2<b1+b2)||(a1>b1&&b2>a2&&a1+a2<b1+b2)||(b2>a2&&a1>b1&&b1>a2)||(b1>a1&&a2>b2&&a2<b1))
        cout<<"Time 2"<<"\n";
        else
        cout<<"Penaltis"<<"\n";
    }
    return 0;
}
