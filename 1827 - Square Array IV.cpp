//  main.cpp
//  answer 1827 - Square Array IV uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
int n,l=0,s=0,c=0;
while(cin>>n)
    {
        l=n/2;
        s=n/3;
        int a[120][120];
        for(int row=0;row<n;row++)
         {
           for(int colm=0;colm<n;colm++)
               {
                   if(colm==l&&row==l)
                   a[l][l]=4;
                   else if((abs(row-colm)<=l)&&(row>=s&&colm>=s)&&(row<n-s&&colm<n-s))
                   a[row][colm]=1;
                   else if(row==colm)
                   a[row][colm]=2;
                   else if(colm+row==n-1)
                   a[row][colm]=3;
                   else
                   a[row][colm]=0;
               }
         }
         for(int row=0;row<n;row++)
         {
           for(int colm=0;colm<n;colm++)
             {
                 cout<<a[row][colm];
             }
             cout<<endl;
         }
         cout<<endl;
    }
return 0;
}
