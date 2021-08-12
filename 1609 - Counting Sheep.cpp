//  main.cpp
//  answer 1609 - Counting Sheep uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<sstream>
using namespace std;
int main()
{
    int count,num,a[10050],resalt=0;
    cin>>count;
    while(count--)
    {
        cin>>num;
        for(int i=0;i<num;i++)
        cin>>a[i];
        for(int i=0;i<num;i++)
           for(int j=i+1;j<num;j++)
              if(a[i]==a[j])
                a[j]=-100;
                
                
        for(int i=0;i<num;i++)
           if(a[i]>=0)
             resalt++;
             
             
             cout<<resalt<<"\n";
             resalt=0;
    }
    return 0;
}
