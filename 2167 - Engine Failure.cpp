//  main.cpp
//  answer 2167 - Engine Failure uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int n,a[120],resalt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
       cin>>a[i];
       
       for(int i=1,j=2;i<n;i++,j++)
           {
               if(a[j]<a[i])
                {
                resalt=j;
                break;
             }
           }
           cout<<resalt<<"\n";
    return 0;
}
