//  main.cpp
//  answer 2896 - Enjoy the Offer online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int count,n,k,resalt=0;
    cin>>count;
    float temp,t;
    while(count--)
    {
        cin>>n>>k;
        resalt=n/k;
        resalt+=n%k;
        cout<<resalt<<endl;
        resalt=0;
    }
    
    return 0;
}
