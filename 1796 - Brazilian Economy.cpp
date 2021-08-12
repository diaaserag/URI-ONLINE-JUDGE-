//  main.cpp
//  answer 1796 - Brazilian Economy uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int x,z,zero=0,ones=0;
    cin>>x;
    while(x--)
    {
        cin>>z;
        if(z==0)
        zero++;
        else
        ones++;
    }
    if(ones>=zero)
    cout<<"N"<<"\n";
    else
    cout<<"Y"<<"\n";
    return 0;
}
