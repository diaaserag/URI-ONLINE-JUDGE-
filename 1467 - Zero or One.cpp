//  main.cpp
//  answer 1467 - Zero or One uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a+b+c==0||a+b+c==3)
        cout<<"*"<<"\n";
        else if((a==0&&b==0&&c==1)||(a==1&&b==1&&c==0))
        cout<<"C"<<"\n";
        else if((a==1&&b==0&&c==1)||(a==0&&b==1&&c==0))
        cout<<"B"<<"\n";
        else if((a==1&&b==0&&c==0)||(a==0&&b==1&&c==1))
        cout<<"A"<<"\n";
    }
    return 0;
}
