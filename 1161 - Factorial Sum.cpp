//  main.cpp
//  answer 1161 - Factorial Sum uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    
    long long x , y , fir = 1 , scond = 1;
    while(cin>>x>>y)
    {
        if(x==0)
        fir=1;
        else
       {
         for(int a=1;a<=x;a++)
         fir=fir*a;
       }
       if(y==0)
       scond=1;
       else
       {
         for(int b=1;b<=y;b++)
         scond=scond*b;
      }
         cout<<scond+fir<<"\n";
         fir=1;
        scond=1;
    }
    return 0;
}
