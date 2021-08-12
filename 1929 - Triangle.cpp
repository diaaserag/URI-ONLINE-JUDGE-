//  main.cpp
//  answer 1929 - Triangle uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    cout<<"S"<<"\n";
    else if((a+b>d)&&(a+d>b)&&(b+d>a))
    cout<<"S"<<"\n";
    else if((c+b>d)&&(b+d>c)&&(d+c>b))
    cout<<"S"<<"\n";
    else if((a+c>d)&&(a+d>c)&&(c+d>a))
    cout<<"S"<<"\n";
    else
    cout<<"N"<<"\n";
    return 0;
}
