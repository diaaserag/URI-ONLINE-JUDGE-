//  main.cpp
//  answer 2028 - Sequence of Sequence uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int n,i,f,z=0,count=0,a[100000];
    while(cin>>n)
    {
        count++;
     for(i=0;i<=n;i++)
       {
         for(f=i;f>0;f--)
         {
           a[z]=i;
           z++;
         }
       }
       if(n==0)
       {
         cout<<"Caso "<<count<<": "<<z+1<<" numero"<<"\n";
         cout<<"0";
       }
       else
       {
        cout<<"Caso "<<count<<": "<<z+1<<" numeros"<<"\n";
        cout<<"0"<<" ";
       }
       for(int g=0;g<z;g++)
       {
           if(g+1==z)
           cout<<a[g];
           else
        cout<<a[g]<<" ";
       }
       cout<<"\n"<<"\n";
       z=0;
   }
    return 0;
}
