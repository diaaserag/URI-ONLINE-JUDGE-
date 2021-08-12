//  main.cpp
//  answer 1168 - LED uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string a;
    int count,x=0,c=0;
    cin>>count;
    while(count--)
    {
      cin>>a;
      x=a.size();
      //cout<<x<<"\n";
      for(int i=0;i<x;i++)
      {
          //cout<<a[i]<<"\n";
         if(a[i]=='1')
         c+=2;
         else if(a[i]=='2'||a[i]=='3'||a[i]=='5')
         c+=5;
         else if(a[i]=='4')
         c+=4;
         else if(a[i]=='6'||a[i]=='9'||a[i]=='0')
         c+=6;
         else if(a[i]=='7')
         c+=3;
         else if(a[i]=='8')
         c+=7;
         //cout<<"c="<<c<<"\n";
      }
    cout<<c<<" leds"<<"\n";
    c=0;
   }
    return 0;
}

