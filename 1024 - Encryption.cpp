//  main.cpp
//  answer 1024 - Encryption uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    int count;
    cin>>count;
    int pp=0;
    pp=count;
    count+=1;
    while(count!=0)
    {
    getline(cin,s1);
    int i=0,e=0,x=0;
    x=s1.size();
    for(i=0,e=x-1;i<x;i++,e--)
    {
        s2[i]=s1[e];
    }
    for(i=0;i<x;i++)
    {
        if((s2[i]>=65&&s2[i]<=90)||(s2[i]>=97&&s2[i]<=122))
        s2[i]+=3;
    }
    if(x%2==0){
    for(i=x/2;i<x;i++)
    {
            //if((s2[i]>=65&&s2[i]<=90)||(s2[i]>=97&&s2[i]<=122))
        s2[i]-=1;
    }
      }
      else
      {
         for( int r=(x/2);r<x;r++)
         {
             //    if((s2[i]>=65&&s2[i]<=90)||(s2[i]>=97&&s2[i]<=122))
             s2[r]-=1;
         }
      }
    for(i=0;i<x;i++)
    {
        cout<<s2[i];
    }
    if(count<=pp)
    {cout<<"\n";
    count--;}
    else
    count--;
  }
return 0;
}
