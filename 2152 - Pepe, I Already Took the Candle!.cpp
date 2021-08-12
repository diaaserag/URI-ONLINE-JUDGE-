//  main.cpp
//  answer 2152 - Pepe, I Already Took the Candle! uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int count,a,b,c;
   cin>>count;
   while(count--)
   {
       cin>>a>>b>>c;
       if(a>9)
       cout<<a<<":";
       else if(a<10)
       cout<<"0"<<a<<":";
       
       if(b>9)
       cout<<b;
       else if(b<10)
       cout<<"0"<<b;
       if(c==1)
       cout<<" - A porta abriu!"<<"\n";
       else if(c==0)
       cout<<" - A porta fechou!"<<"\n";
   }
    return 0;
}
