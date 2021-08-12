//  main.cpp
//  answer 1557 - Square Matrix III uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
int n,l=0,s=0,c=0;
while(cin>>n)
{
    if(n==0)
    {
        break;
    }
    else
    {
        int a[100][100];
        for(int row=0;row<n;row++)
         {
           for(int colm=0;colm<n;colm++)
               {
                   a[row][colm]=1;
                   l=row+colm;
                   for(int i=0;i<l;i++)
                   {
                       a[row][colm]*=2;
                      }
               }
         }
             s=a[n-1][n-1];
               while(s>0)
               {
                   s/=10;
                   c++;
               }
               for(int row=0;row<n;row++)
                 {
                   for(int colm=0;colm<n;colm++)
                     {
                         if(colm==0)
                         {
                             cout<<setw(c)<<a[row][colm];
                         }
                         else
                       cout<<" "<<setw(c)<<a[row][colm];
                       }
                       cout<<endl;
                   }
                   cout<<endl;
                   c=0;
    }
    
}
return 0;
}
