//  main.cpp
//  answer 1397 - Game of The Greatest uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int num,a,b,ac=0,bc=0;
    while(cin>>num&&num>0)
    {
        while(num--){
     cin>>a>>b;
     if(a>b)
     ac++;
     else if(b>a)
     bc++;}
     cout<<ac<<" "<<bc<<"\n";
     ac=0;bc=0;
    }
    return 0;
}
