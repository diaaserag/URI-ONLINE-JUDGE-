//  main.cpp
//  answer 1165 - Prime Number uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int count,x,c=0;
    cin>>count;
    while(count--)
    {
        c=0;
        cin>>x;
        for(int i=2;i<x/2;i++)
          {
              if(x%i==0&&x!=i)
              {
                  cout<<x<<" nao eh primo"<<"\n";
                  c=100;
                  break;
              }
          }
          if(x==4)
          cout<<x<<" nao eh primo"<<"\n";
        else if(c==0)
        cout<<x<<" eh primo"<<"\n";
    }
    return 0;
}
