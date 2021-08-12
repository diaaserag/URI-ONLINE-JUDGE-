//  main.cpp
//  answer 1030 - Flavious Josephus Legend uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int count,n,k,p=0,c=0,del=1,a[10005],resalt=0,o=0,z=0 ;
      cin>>count;
    while(count--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++)
           a[i]=i;
           
           if(n==1)
           {cout<<"Case "<< ++o <<": "<<1<<"\n";continue;}
           else if(k>n)
           {z=1;del=0;}
           else
           {a[k]=0;z=k;}
        for(int i=z;del<n-1;i++)
        {
            if(a[i]>0)
              c++;
              
              if(c==k&&a[i]>0)
              {
                 a[i]=0;
                 del++;
                 c=0;
              }
              if(i==n)
              {
                  i=1;
                  if(a[i]>0)
                  c++;
                  if(c==k&&a[i]>0)
              {
                 a[i]=0;
                 del++;
                 c=0;
              }

              }
        }
        for(int i=1;i<=n;i++)
         {
          resalt+=a[i];
         }
          cout<<"Case "<< ++o <<": "<<resalt<<"\n";
          resalt=0;del=1;c=0;p=0;
    
    }
    return 0;
}
