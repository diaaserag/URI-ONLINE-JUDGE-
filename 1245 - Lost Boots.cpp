//  main.cpp
//  answer 1245 - Lost Boots uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int num,a[10001],c=0;
    char pos[10001];
    while(cin>>num)
    {
      for(int i=0;i<num;i++)
      {
          cin>>a[i];
          cin>>pos[i];
      }
      for(int i=0;i<num-1;i++)
          for(int j=i+1;j<num;j++)
                if(a[i]==a[j]&&pos[i]!=pos[j]&&a[j]>0)
                    {c++;a[j]=-1; break;}
    
       cout<<c<<"\n";
       c=0;
    }
    return 0;
}
