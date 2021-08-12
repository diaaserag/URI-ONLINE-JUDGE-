//  main.cpp
//  answer 1072 - Interval 2 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
     int x,n,m=0,c=0;
     cin>>n;
     while(n--)
    {
      cin>>x;
        if(x<=20&&x>=10)
        c++;
        else
        m++;
    }
          cout<< c <<" in"<<"\n";
      cout<< m <<" out"<<"\n";
    return 0;
}
