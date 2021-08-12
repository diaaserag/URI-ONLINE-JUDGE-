//  main.cpp
//  answer 1789 - The Race of Slugs uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int x,arr[1000],temp=0;
    while(cin>>x){
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    temp=arr[0];
    for(int i=1;i<x;i++)
    {
        if(arr[i]>temp)
        temp=arr[i];
    }
    if(temp<10)
    cout<<"1"<<"\n";
    else if(temp>=10&&temp<20)
    cout<<"2"<<"\n";
    else
    cout<<"3"<<"\n";
    temp=0;
  }
    return 0;
}
