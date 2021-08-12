//  main.cpp
//  answer 1158 - Sum of Consecutive Odd Numbers III uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x,y,h=0,c=0,count;
    cin>>count;
    while(count--){
    cin>>x>>y;
    for(int i=x;y!=0;i++)
    {
        if(i%2!=0)
        {
            y--;
            h+=i;
        }
        
    }
    cout<<h<<"\n";
    h=0;
    }
    return 0;
}
