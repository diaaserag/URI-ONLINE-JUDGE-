//  main.cpp
//  answer 1164 - Perfect Number uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int count,x,c=0,h=0;
    cin>>count;
    while(count--)
    {
        cin>>x;
        for(int i=1;i<x;i++)
        {
          if(x%i==0)
            c+=i;
        }
        if(x==c)
        cout<<x<<" eh perfeito"<<"\n";
        else
        cout<<x<<" nao eh perfeito"<<"\n";
        c=0;
    }
    return 0;
}
