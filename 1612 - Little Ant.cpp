//  main.cpp
//  answer 1612 - Little Ant uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int count,num;
    cin>>count;
    while(count--)
    {
        cin>>num;
        if(num%2==1)
        cout<<(num/2)+1<<"\n";
        else
        cout<<num/2<<"\n";
    }
    return 0;
}
