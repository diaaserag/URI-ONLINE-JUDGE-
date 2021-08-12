//  main.cpp
//  answer  1155 - S Sequence uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i=0;
    float c=1.0;
    for(i=2;i<=100;i++)
    c+=1.0/i;
    cout<<setprecision(2)<<fixed;
    cout<<c<<"\n";
    return 0;
}
