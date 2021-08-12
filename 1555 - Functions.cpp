//  main.cpp
//  answer 1555 - Functions uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
long long r(int ,int);
long long b(int ,int);
long long c(int ,int);
long long compair(long long,long long,long long);
int main()
{
    int x,y,count;cin>>count;
    long long a=0,aa=0,aaa=0;
    while(count--)
    {
     cin>>x>>y;
     a=r(x,y);
     aa=b(x,y);
     aaa=c(x,y);
     compair(a,aa,aaa);
   }
}
long long r(int x ,int y)
{
    long long raf=0;
    raf=((3*3*x*x)+(y*y));
    return raf;
}
long long b(int x,int y)
{
    long long beto=0;
    beto=((2*(x*x))+(5*5*y*y));
    return beto;
}
long long c(int x,int y)
{
    long long car=0;
    car=((-100*x)+(y*y*y));
    return car;
}
long long compair(long long a,long long aa,long long aaa)
{
    if(a>aa&&a>aaa)
    cout<<"Rafael ganhou"<<"\n";
    else if(aa>a&&aa>aaa)
    cout<<"Beto ganhou"<<"\n";
    else if(aaa>a&&aaa>aa)
    cout<<"Carlos ganhou"<<"\n";
}
