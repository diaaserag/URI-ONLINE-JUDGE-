//  main.cpp
//  answer 2168 - Twilight at Portland uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int n,a[110][110],r[100007],resalt=0,c=0,u=0;
    cin>>n;
    for(int i=0;i<=n;i++)
      for(int j=0;j<=n;j++)
            cin>>a[i][j];
            
            
    for(int i=0;i<=n;i++)
      for(int j=0;j<=n;j++)
      {
          c++;
          resalt+=a[i][j]+a[i+1][j];
          if(c==2)
          {
              r[u++]=resalt;
              resalt=0;
                  c=0;
              if(j!=n)
              j-=1;
          }
      }
      
      //for(int i=0;i<n*n;i++)
        // cout<<r[i]<<"  ";
          // cout<<endl;
          int x=n*n;
          int q=0;
       for(int i=0;i<x;i++)
            {
                q++;
                if(r[i]>1)
                 cout<<"S";
                else
                cout<<"U";
                
                if(q==n)
                {
                cout<<endl;
                q=0;
               }
            }

    return 0;
}
