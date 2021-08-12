//  main.cpp
//  answer 1582 - The Pythagorean Theorem uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,h=0,d=0;
    while(cin>>a>>b>>c){
    d=0;h=0;
    if((a*a)+(b*b)==(c*c))
    h=1;
    
    else if((a*a)+(c*c)==(b*b))
    h=1;
    
    else if((b*b)+(c*c)==(a*a))
    h=1;
    
    for(int i=2;i<12;i++)
    {
        if(a%i==0&&b%i==0&&c%i==0)
        {
            d=1;
            break;
        }
    }
    if(h==1&&d!=1)
    cout<<"tripla pitagorica primitiva"<<"\n";
    else if(h==1&&d==1)
    cout<<"tripla pitagorica"<<"\n";
    else
    cout<<"tripla"<<"\n";
    }
    return 0;
}
