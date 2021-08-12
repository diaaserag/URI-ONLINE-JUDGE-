//  main.cpp
//  answer 2164 - Fast Fibonacci uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
   int c;
   double a=0,b=0,v=0,pp=0,mm=0;
   cin>>c;
   a=sqrt(5);
   b=(1+a)/2;
   v=(1-a)/2;
   b=pow(b,c);
   v=pow(v,c);
   pp=b-v;
   mm=pp/a;
   cout<<setprecision(1)<<fixed;
   cout<<mm<<"\n";
   return 0;
}
