//  main.cpp
//  answer 1234 - Dancing Sentence uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes
#include<iostream>
#include<string>
using namespace std;
int main()
{
     string a;
     int x=0,c=1;
       while(getline(cin,a)){
       x=a.size();
     for(int i=0;i<x;i++)
    {
       if(a[i]==' ')
        {a[i]=a[i];}
        else if((a[i]<=122&&a[i]>=97)&&(c%2!=0))
        {a[i]-=32;c++;}
        else if((a[i]<=90&&a[i]>=65)&&(c%2==0))
        {a[i]+=32;c++;}
        else
        c++;
    }
    for(int i=0;i<x;i++)
    {cout<<a[i];}
    cout<<"\n";
    c=1;}
    return 0;
}

