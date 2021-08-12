//  main.cpp
//  answer 2311 - Diving uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
     int count;
     cin>>count;
     double a[9],r,mt,st,c=0.0,resalt=0.0;
     string s;
     while(count--)
     {
         c=0;
         
         cin>>s;
         cin>>r;
         for(int i=0;i<7;i++)
            cin>>a[i];
            mt=a[0];
         for(int i=0;i<7;i++)
              {
                  if(mt<a[i])
                      mt=a[i];
              }
              st=a[0];
              for(int i=0;i<7;i++)
              {
                  if(st>a[i])
                      st=a[i];
              }
               for(int i=0;i<7;i++)
              {
               c+=a[i];
             }
             c=c-(mt+st);
             resalt=c*r;
             cout<<setprecision(2)<<fixed;
             cout<<s<<" "<<resalt<<"\n";
     }
    return 0;
}
