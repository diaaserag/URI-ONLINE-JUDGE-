//  main.cpp
//  answer 1848 - Counting Crow uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int c=0,n=0;
    string a;
    while(getline(cin,a))
    {
        if(n==3)
        break;
        else
        {
           if(a=="caw caw")
           {
            cout<<c<<"\n";
             n++;
             c=0;
           }
          else if(a=="---")
            c+=0;
          else if(a=="--*")
          c+=1;
          else if(a=="-*-")
          c+=2;
          else if(a=="*--")
          c+=4;
          else if(a=="-**")
          c+=3;
          else if(a=="*-*")
          c+=5;
          else if(a=="**-")
          c+=6;
          else if(a=="***")
          c+=7;
       }
    }
    return 0;
}
