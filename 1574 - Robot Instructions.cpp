//  main.cpp
//  answer 1574 - Robot Instructions uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<sstream>
using namespace std;
int main()
{
    int count,num,resalt=0,h=0,i=1,a[200];
    string s,n1,n2;
    cin>>count;
    while(count--)
     {
         cin>>num;
         num+=1;
         i=0;
         while(num--)
         {
             getline(cin,s);
             if(s=="LEFT")
             {resalt--;a[i++]=-1;}
             else if(s=="RIGHT")
             {resalt++;a[i++]=1;}
             else if(i>0)
             {
                 istringstream iss(s);
                 iss>>n1>>n2>>h;
                 resalt+=a[h-1];
                 a[i++]=a[h-1];
             }
         }
         cout<<resalt<<"\n";
         resalt=0;
         i=0;
     }
    return 0;
}
