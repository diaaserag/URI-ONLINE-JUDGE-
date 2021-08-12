//  main.cpp
//  answer 143 - Squared and Cubic uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=1,g=1,h=1;i<=x;i++,g=i*i,h=i*g)
     {
         cout<<i<<" "<<g<<" "<<h<<"\n";
     }
    return 0;
}
