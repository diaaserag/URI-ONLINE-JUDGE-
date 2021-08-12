//  main.cpp
//  answer 1198 - Hashmat the Brave Warrior uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    
    long long x , y;
    while(cin>>x>>y)
    {
     if(x>=y)
     cout<<x-y<<"\n";
     else
     cout<<y-x<<"\n";
    }
    return 0;
}
