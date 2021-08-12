//  main.cpp
//  answer 1154 - Ages uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,z=0,c=0;
    float h=0.0;
    while(cin>>x)
    {
        if(x<0)
         break;
         c+=x;
         z++;
    }
    cout<<setprecision(2)<<fixed;
    h=(c*1.0)/(z*1.0);
    cout<<h<<"\n";
    return 0;
}
