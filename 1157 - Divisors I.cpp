//  main.cpp
//  answer 1157 - Divisors I uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
      if(x%i==0)
      cout<<i<<"\n";
    }
    
    return 0;
}
