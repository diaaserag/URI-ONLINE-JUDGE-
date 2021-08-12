//  main.cpp
//  answer 1323 - Feynman uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int n,resalt=0;
    while(cin>>n)
    {
        if(n==0)
        break;
        while(n>0)
        {
            resalt+=n*n;
            n--;
        }
        cout<<resalt<<"\n";
        resalt=0;
    }
    
    
    
    return 0;
}
