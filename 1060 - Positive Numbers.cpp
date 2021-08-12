//  main.cpp
//  answer 1060 - Positive Numbers uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int c=0,x=6;
    float z;
    while(x--)
    {
        cin>>z;
        if(z>0)
        c++;
    }
    cout<<c<<" valores positivos"<<"\n";
    return 0;
}
