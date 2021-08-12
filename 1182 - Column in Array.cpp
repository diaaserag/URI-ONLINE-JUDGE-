//  main.cpp
//  answer 1182 - Column in Array uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
 {
    int x=0;cin>>x;
    char ch;cin>>ch;
    float arr[12][12],sum=0;
    for(int i=0;i<12;i++)
    {
       for(int j=0;j<12;j++)
         {
          cin>>arr[i][j];
          if(j==x)
          sum+=arr[i][j];
         }
    }
    cout<<setprecision(1)<<fixed;
    if(ch=='S')
     cout<<sum<<"\n";
     else
     cout<<sum/12<<"\n";
    return 0;
 }
