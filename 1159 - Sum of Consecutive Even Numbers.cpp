//  main.cpp
//  answer 1159 - Sum of Consecutive Even Numbers uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x,y,h=0,c=0;
    while(cin>>x){
    if(x==0)
    break;
    y=5;
    for(int i=x;y!=0;i++)
    {
        if(i%2==0)
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
