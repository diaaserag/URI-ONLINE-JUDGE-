//  main.cpp
//  answer 1309 - Monetary Formatting uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
#include<string>
double sent(int);
int main()
{
    int n,x=0,m=0;
    double c=0.0;
    string s;
    while(cin>>s>>n)
    {
        x=s.length();
        c=sent(n);
        cout<<"$";
        m=x;
        for(int i=0;i<x-1;i++)
        {
          cout<<s[i];
          m--;
          if(m%3==0&&m!=0)
          cout<<",";
        }
        cout<<setprecision(2)<<fixed;
        cout<<c+(s[x-1]-'0')<<"\n";
    }
    return 0;
}
double sent(int var)
{
    return var/100.0;
}
