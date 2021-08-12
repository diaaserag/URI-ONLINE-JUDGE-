//  main.cpp
//  answer 2140 - Two Bills uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
int main()
{
   int a,b,c=0,vv=0,f[6]={2,5,10,20,50,100},y[1000],m=0;
   for(int i=0;i<6;i++)
     for(int j=i;j<6;j++,m++)
        {
            y[m]=f[i]+f[j];
        }
        while(cin>>a>>b)
        {
            c=b-a;
            if(a==0&&b==0)
               {
                   break;
               }
            else
              {
                for(int i=0;i<m;i++)
                  {
                     if(c==y[i])
                      {
                          vv=100;
                          break;
                      }
                      
                  }
              }
              if(vv==100)
              {
                 cout<<"possible"<<"\n";
                 vv=0;
              }
              else
              cout<<"impossible"<<"\n";
        }
   return 0;
}
