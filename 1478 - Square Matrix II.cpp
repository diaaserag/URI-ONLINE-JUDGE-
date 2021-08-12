//  main.cpp
//  answer 1478 - Square Matrix II uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
int n;
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
           for(int colm=0;colm<n;colm++)
               {
                   if(row<=colm)
                     a[row][colm]=(colm-row)+1;
                   else
                     a[row][colm]=(row-colm)+1;
               }
               for(int row=0;row<n;row++)
                 {
                   for(int colm=0;colm<n;colm++)
                     {
                         if(colm==0)
                         {
                             cout<<setw(3)<<a[row][colm];
                         }
                         else
                       cout<<" "<<setw(3)<<a[row][colm];
                       }
                       cout<<endl;
                   }
                   cout<<endl;
    }
    
}
return 0;
}
