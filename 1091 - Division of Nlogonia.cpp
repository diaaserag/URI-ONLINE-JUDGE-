//  main.cpp
//  answer 1091 - Division of Nlogonia uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int num,n,m,x,y;
    while(cin>>num)
    {
        if(num==0)
        break;
        else
        {
          cin>>n>>m;
          while(num--)
         {
            cin>>x>>y;
            if(x>n&&y>m)
            cout<<"NE"<<"\n";
            else if(x<n&&y>m)
            cout<<"NO"<<"\n";
            else if(x>n&&y<m)
            cout<<"SE"<<"\n";
            else if(x<n&&y<m)
            cout<<"SO"<<"\n";
            else
            cout<<"divisa"<<"\n";
         }
       }
    }
    return 0;
}
