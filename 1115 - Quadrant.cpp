//  main.cpp
//  answer 1115 - Quadrant uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    while(cin>>n>>m)
    {
        if(n==0||m==0)
        break;
      else if(n>0&&m>0)
      {cout<<"primeiro"<<"\n";}
      else if(n>0&&m<0)
      cout<<"quarto"<<"\n";
        else if(n<0&&m<0)
      cout<<"terceiro"<<"\n";
        else if(n<0&&m>0)
      cout<<"segundo"<<"\n";
    }
    return 0;
}
