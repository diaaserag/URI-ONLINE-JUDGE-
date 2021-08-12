//  main.cpp
//  answer 1985 - MacPRONALTS uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,z,count;
    float sum=0;
    cin>>count;
    while(count--)
    {
        cin>>x>>z;
        if(x==1001)
        sum+=z*1.50;
        else if(x==1002)
        sum+=z*2.50;
        else if(x==1003)
        sum+=z*3.50;
        else if(x==1004)
        sum+=z*4.50;
        else if(x==1005)
        sum+=z*5.50;
    }
    cout<<setprecision(2)<<fixed;
    cout<<sum<<"\n";
    
    return 0;
}
