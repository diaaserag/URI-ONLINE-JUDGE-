//  main.cpp
//  answer 1188 - Inferior Area uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float arr[12][12];double sum=0;
    char w;
    cin>>w;
    for(int i=0;i<12;i++){
       for(int j=0;j<12;j++)
          {
             cin>>arr[i][j];
             if((j+i>11)&&(i>j))
             {sum+=arr[i][j];}
         }
         }
          if(w=='S')
          {cout<<setprecision(1)<<fixed;
          cout<<sum<<"\n";}
        else
          {cout<<setprecision(1)<<fixed;cout<<sum/30.0<<"\n";}
    return 0;
}
