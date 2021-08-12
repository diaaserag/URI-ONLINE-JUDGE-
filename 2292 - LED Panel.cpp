//  main.cpp
//  answer 2292 - LED Panel uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    string b;
    long long a[65],num;
    int g=0,c[65],count=0;
    cin>>count;
    while(count--)
 {
    cin>>b>>num;
    g=b.length();
    for(int i=0;i<=60;i++)
        a[i]=pow(2,i);
    for(int i=0;i<g;i++)
         {
             if(b[i]=='X')
                 c[i]=0;
             else
              c[i]=1;
         }
         for(int i=60;i>=0;i--)
            {
                   if(a[i]<=num)
                     {
                         if(c[i]==1)
                           {
                             c[i]=0;
                             for(int y=i+1;y<g;y++)
                             {
                                 if(c[y]==0)
                                  {
                                  c[y]=1;
                                  break;
                            }
                            else
                            c[y]=0;
                             }
                      }
                           else
                            c[i]=1;
                            num-=a[i];
                     }
                     else if(num==0)
                     break;
            }
        
            for(int i=0;i<g;i++)
         {
             if(c[i]==1)
                 b[i]='O';
             else
              b[i]='X';
         }
         cout<<b<<"\n";
     }
    return 0;
}
