//  main.cpp
//  answer 1064 - Positives and Average uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int c=0,x=6;
    float z,m=0.0;
    while(x--)
    {
        cin>>z;
        if(z>0)
       {
         c++;
         m+=z;
       }
    }
    cout<<setprecision(1)<<fixed;
    cout<<c<<" valores positivos"<<"\n"<<m/c<<"\n";;
    return 0;
}
