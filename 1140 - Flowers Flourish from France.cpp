//  main.cpp
//  answer 1140 - Flowers Flourish from France uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
   string s;
   int a=0,k=0;
   while(getline(cin,s))
   {
       k=0;
   char m,sm,ca;
      m=s[0];
      sm=s[0]+32;
      ca=s[0]-32;
   if(m=='*')
   break;
   else
   {
   a=s.length();
   for(int i=1;i<a;i++)
   {
         if(s[i]==' '&&(s[i+1]!=m&&s[i+1]!=sm&&s[i+1]!=ca))
         {
             cout<<"N"<<"\n";
             k=100;
             break;
         }
   }
   if(k==0){
   cout<<"Y"<<"\n";
   k=0;}
}
   }
    return 0;
}

