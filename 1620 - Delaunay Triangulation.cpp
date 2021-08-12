//  main.cpp
//  answer 1620 - Delaunay Triangulation uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long double num;
    double count=0.0;
    while(cin>>num)
    {
        if(num==0)
        break;
        else
        {
         count=(num-3.0)/num;
         cout<<setprecision(6)<<fixed;
         cout<<count<<"\n";
       }
    }
    
    return 0;
}
