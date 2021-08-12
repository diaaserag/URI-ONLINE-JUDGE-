//  main.cpp
//  answer 1805 - Natural Sum uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int first,end;
    double c=0.0;
    long long sum=0;
    cin>>first>>end;
    c=(end-first)+1.0;
    c=c/2.0;
    sum=(c*end)+(c*first);
    cout<<sum<<"\n";
    return 0;
}
