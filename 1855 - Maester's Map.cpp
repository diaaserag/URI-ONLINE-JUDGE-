//  main.cpp
//  answer 1855 - Maester's Map uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<cstring>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int c,r,cs=0,rs=0;
    cin>>c>>r;
    char a[100][100];
    for(int row=0;row<r;row++)
    {
        for(int colm=0;colm<c;colm++)
        {
          cin>>a[row][colm];
        }
    }
    for(int row=0;row<r;row++)
    {
        for(int colm=0;colm<c;colm++)
        {
          if(a[row][colm]=='*')
          {
              rs=row;
              cs=colm;
              for(int row=0;row<r;row++)
               for(int colm=0;colm<c;colm++)
               {
                   if(cs==colm&&rs>row&&a[row][colm]=='v')
                   {
                       cout<<"*"<<"\n";
                       exit(0);
                   }
                   else if(cs==colm&&rs<row&&a[row][colm]=='^')
                   {
                       cout<<"*"<<"\n";
                       exit(0);
                   }
                   else if(rs==row&&cs>colm&&a[row][colm]=='>')
                    {
                    cout<<"*"<<"\n";
                       exit(0);
                    }
                    else if(rs==row&&cs<colm&&a[row][colm]=='<')
                    {
                    cout<<"*"<<"\n";
                       exit(0);
                    }
               }
          }
        }
    }
    cout<<"!"<<"\n";
    return 0;
}
