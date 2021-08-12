//  main.cpp
//  answer 2242 - Huaauhahhuahau uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<string>
#include<cstring>
#include <stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    int j=0;
    char a[100],s[100];
    cin.getline(a,100);
    for(int i=0;i<strlen(a);i++)
       {
           if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
           {
               s[j]=a[i];
               j++;
           }
       }
    for(int i=0,p=j-1;i<j;i++,p--)
    {
        if(s[i]!=s[p])
        {
            cout<<"N"<<"\n";
            exit(0);
        }
        if(i==j)
        break;
    }
    cout<<"S"<<"\n";
    return 0;
}
