//  main.cpp
//  answer 1099 - Sum of Consecutive Odd Numbers II uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x,y,z=0,count;
    cin>>count;
    while(count--)
    {
        cin>>x>>y;
        if(x<y)
        for(int i=x+1;i<y;i++)
        {
            if(i%2!=0)
            {z+=i;}
        }
        else
        for(int i=y+1;i<x;i++)
        {
            if(i%2!=0)
            {z+=i;}
        }
        cout<< z <<"\n";
           z=0;
    }
    return 0;
}
