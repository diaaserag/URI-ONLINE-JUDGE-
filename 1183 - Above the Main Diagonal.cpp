//  main.cpp
//  answer 1183 - Above the Main Diagonal uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float arr[12][12],sum=0;
    char w;
    cin>>w;
    for(int i=0;i<12;i++)
       for(int j=0;j<12;j++)
          cin>>arr[i][j];
    for(int q=0;q<11;q++)
       for(int t=q+1;t<12;t++)
          sum+=arr[q][t];
          if(w=='S')
          {cout<<setprecision(1)<<fixed;
          cout<<sum<<"\n";}
        else
          {cout<<setprecision(1)<<fixed;cout<<sum/66<<"\n";}
    return 0;
}
