//  main.cpp
//  answer 1180 - Lowest Number and Position uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int x,arr[1000],c=0,temp=0;
    cin>>x;
    cin>>arr[0];
    temp=arr[0];
    for(int i=1;i<x;i++)
    cin>>arr[i];
    for(int i=1;i<x;i++)
    {
        if(temp>arr[i])
        {
            temp=arr[i];
            c=i;
        }
    }
         cout<<"Menor valor: "<< temp <<"\n";
         cout<<"Posicao: "<< c <<"\n";
    return 0;
}
