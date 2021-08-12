//  main.cpp
//  answer 1074 - Even or Odd uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
   int x,n;
   cin>>n;
   while(n--)
 {
   cin>>x;
   if(x%2!=0&&x<0)
   cout<<"ODD NEGATIVE"<<"\n";
     else if(x%2!=0&&x>0)
   cout<<"ODD POSITIVE"<<"\n";
       else  if(x%2==0&&x>0)
   cout<<"EVEN POSITIVE"<<"\n";
          else   if(x%2==0&&x<0)
   cout<<"EVEN NEGATIVE"<<"\n";
   else
   cout<<"NULL"<<"\n";
 }
    return 0;
}
