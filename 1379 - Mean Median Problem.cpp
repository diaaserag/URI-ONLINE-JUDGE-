//  main.cpp
//  answer 379 - Mean Median Problem uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes
#include<iostream>
using namespace std;
int main()
{
    long long a,b,c=0,d=0;
    while(cin>>a>>b)
    {
        if(a+b==0)
        break;
        else
        {
         d=b-a;
         c=a-d;
         cout<<c<<"\n";
       }
    }
    return 0;
}

