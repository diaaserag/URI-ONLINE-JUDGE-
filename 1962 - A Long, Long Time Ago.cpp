//  main.cpp
//  answer 1962 - A Long, Long Time Ago uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    long long num,resalt;
    int count;  cin>>count;
    while(count--)
    {
        cin>>num;
        resalt=num-2015;
        if(resalt>=0)
        cout<<resalt+1<<" A.C."<<"\n";
        else if(resalt<0)
        cout<<resalt*-1<<" D.C."<<"\n";
    }
    return 0;
}
