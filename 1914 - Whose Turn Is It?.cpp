//  main.cpp
//  answer 1914 - Whose Turn Is It? uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int count,sum=0,x,y;
    string a,b,c,d;
    cin>>count;
    while(count--)
    {
        cin>>a>>b>>c>>d;
        cin>>x>>y;
        sum=x+y;
        if(sum%2==0)
        {
            if(b=="PAR")
            cout<<a<<"\n";
            else
            cout<<c<<"\n";
        }
        else if(sum%2!=0)
        {
            if(d=="IMPAR")
            cout<<c<<"\n";
            else
            cout<<a<<"\n";
        }
    }
    return 0;
}
