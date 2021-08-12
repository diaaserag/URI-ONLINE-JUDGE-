//  main.cpp
//  answer 1151 - Easy Fibonacci uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x,arr[50];
    arr[0]=0;
    arr[1]=1;
    cin>>x;
    for(int i=2;i<x;i++)
    {
        arr[i]=arr[i-2]+arr[i-1];
    }
    for(int i=0;i<x;i++)
    {
        if(i+1==x)
         cout<<arr[i]<<"\n";
        else
        cout<<arr[i]<<" ";
    }
    return 0;
}
