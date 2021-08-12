//  main.cpp
//  answer 1071 - Sum of Consecutive Odd Numbers I uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x,y,c=0;
    while(cin>>x>>y)
    {
        for(int i=y+1;i<x;i++)
        {
            if(i%2!=0)
            {
              c+=i;
           }
           
       }
       cout<<c<<"\n";
        c=0;
    }
    
    return 0;
}
