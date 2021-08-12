//  main.cpp
//  answer 1013 - The Greatest uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a=1,b=1,c=1,MAIORAB,g,d,f;
    cin>>a>>b>>c;
    g=abs(a-b);
    d=a+b+g;
    f=d/2;
    MAIORAB=(f+c+abs(f-c))/2;
    cout<<MAIORAB<<" eh o maior"<<"\n";

    return 0;
}
