//  main.cpp
//  answer 1177 - Array Fill II uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x,arr[1000];
    cin>>x;
    for(int i=0;i<1000;)
     for(int g=0;g<x&&i<1000;g++)
       {cout<<"N["<< i <<"] = "<< g <<"\n";i++;}
    
    return 0;
}
