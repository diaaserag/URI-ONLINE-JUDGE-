//  main.cpp
//  answer 1150 - Exceeding Z uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x , z , count=0;
    cin>>x>>z;
    int sum=0,temp=x;
    
    while(x>=z){
        cin>>z;
    }
    while(temp<=z){
        sum+=x;count++;x++;
        temp=sum;
    }
    cout<<count<<"\n";
    return 0;
}
