//  main.cpp
//  answer 2159 - Approximate Number of Primes uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n;
    double s,ss;
    cin>>n;
    s=n/log(n);
    ss=s*1.25506;
    cout<<setprecision(1)<<fixed;
    cout<<s<<" "<<ss<<"\n";
    return 0;
}
