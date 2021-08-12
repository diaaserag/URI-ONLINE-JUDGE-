//  main.cpp
//  answer 2172 - Event uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int c;
   long long x;
   while(cin>>c>>x)
   {
    if(c==0&&x==0)
    break;
    else
    cout<<c*x<<"\n";
   }
   return 0;
}
