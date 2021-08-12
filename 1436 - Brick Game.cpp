//  main.cpp
//  answer 1436 - Brick Game uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int array[50],m=0,a=0,temp=5000,count, resalt=0,p=0,x,c=0;
    cin>>count;
    while(count--)
    {
        cin>>x;
        for(int h=0;h<x;h++)
        {cin>>array[h];}
        for(int i=0;i<x;i++)
     {
            for(int j=0;j<x;j++)
        {
            
            a+=abs(array[i]-array[j]);
        }
       if(temp>=a)
       {
            resalt=a;
       }
       else
       {
           resalt = resalt;
       }
      temp=a;
      a=0;
    }
            for(int r=0;r<x;r++)
     {
            for(int e=0;e<x;e++)
        {
            
            c+=abs(array[r]-array[e]);
        }
        if(c==resalt)
      {
       cout<<"Case "<<++p <<": "<<array[r]<<"\n";
       break;
      }
      else
      c=0;
    }
   }
    return 0;
}
