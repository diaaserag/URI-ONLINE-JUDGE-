//  main.cpp
//  answer 1300 - Hours and Minutes uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>

using namespace std;
int main()
{
    int num;
    while(cin>>num)
    {
        if(num%6==0)
        cout<<"Y"<<"\n";
        else
        cout<<"N"<<"\n";
    }
    return 0;
}
