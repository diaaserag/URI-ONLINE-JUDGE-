//  main.cpp
//  answer 2162 - Peaks and Valleys uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
      int n,a[120];
      cin>>n;
      for(int i=0;i<n;i++)
      cin>>a[i];
      for(int i=0,j=1,k=2;k<n;i++,j++,k++)
      {
          if(a[i]<a[j]&&a[j]<a[k])
          {
              cout<<"0"<<"\n";
              exit(0);
          }
          else if(a[i]>a[j]&&a[j]>a[k])
          {
              cout<<"0"<<"\n";
              exit(0);
          }
          else if(a[i]==a[j]||a[j]==a[k])
          {
              cout<<"0"<<"\n";
              exit(0);
          }
      }
      if(n==2&&a[0]==a[1])
      {
          cout<<"0"<<"\n";
              exit(0);
      }
      cout<<"1"<<"\n";
    return 0;
}
