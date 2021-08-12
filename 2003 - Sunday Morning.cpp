//  main.cpp
//  answer 2003 - Sunday Morning uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int h,c,a=0,b=0,e=0;
    char d;
    while(cin>>h>>d>>c)
    {
       a=(h*60)+c+60;
       b=8*60;
       e=a-b;
       if(e>=0)
       cout<<"Atraso maximo: "<<e<<"\n";
       else
       cout<<"Atraso maximo: 0"<<"\n";
    }
    return 0;
}

