//  main.cpp
//  answer  1173 - Array fill I uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int ar[10]={x};
    long long now=1,temp=0;
    for(int i=0;i<10;i++)
    {
        ar[i]=x;
    }
    temp=ar[0];
    cout<<"N["<< 0 <<"] = "<< temp <<"\n";
    for(int i=1;i<10;i++)
    {
        now=temp*2;
        cout<<"N["<< i <<"] = "<< now <<"\n";
        temp=now;
    }
    return 0;
}
