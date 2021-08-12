//  main.cpp
//  answer  1156 - S Sequence II uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i=0,g=0;
    float c=1.0;
    for(i=3,g=2;i<=39;i+=2,g*=2)
    {
      c+=(i*1.0)/(g*1.0);
    }
    cout<<setprecision(2)<<fixed;
    cout<<c<<"\n";
    return 0;
}
