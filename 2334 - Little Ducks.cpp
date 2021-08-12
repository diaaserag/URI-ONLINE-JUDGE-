//  main.cpp
//  answer 2334 - Little Ducks uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long double n,z=1;
    cout<<setprecision(0)<<fixed;
    while(cin>>n)
    {
        z=n-1;
        if(n==-1)
           break;
          else if(n==0)
             cout<<n<<"\n";
           else
             cout<<z<<"\n";
    }
    return 0;
}
