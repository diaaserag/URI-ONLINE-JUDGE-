//  main.cpp
//  answer 1116 - Dividing X by Y uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,m;
    int count;
    float x=1.0;
    cin>>count;
    while(count--)
    {
              cin>>n>>m;
       if(m==0)
      {cout<<"divisao impossivel"<<"\n";}
      else
      {
          cout<<setprecision(1)<<fixed;
          x=(n*1.0)/(m*1.0);
       cout<<x<<"\n";
      }
    }
    return 0;
}
