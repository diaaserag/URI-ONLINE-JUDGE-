//  main.cpp
//  answer 1146 - Growing Sequences uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int x;
    while(cin>>x)
    {
        if(x==0)
         break;
         for(int i=1;i<=x;i++){
             if(i<x)
               cout<<i<<" ";
            else
              cout<<i<<"\n";
        }
    }
    
    return 0;
}
