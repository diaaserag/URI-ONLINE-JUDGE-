//  main.cpp
//  answer 2166 - Square Root of 2 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double temp=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        temp=1.0/(2.0+temp);
    }
    temp+=1.0;
    cout<<setprecision(10)<<fixed;
    cout<<temp<<"\n";
    return 0;
}
