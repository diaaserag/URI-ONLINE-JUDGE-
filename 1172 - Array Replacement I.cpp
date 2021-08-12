//  main.cpp
//  answer 1172 - Array Replacement I uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int ar[10];
    for(int i=0;i<10;i++)
    {
        cin>>ar[i];
        if(ar[i]<=0)
        ar[i]=1;
    }
    for(int k=0;k<10;k++)
    {
        cout<<"X["<< k <<"] = "<< ar[k] <<"\n";
    }
    return 0;
}
