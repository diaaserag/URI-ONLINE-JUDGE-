//  main.cpp
//  answer 2176 - Parity uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int m=0,c=0;
    string s;
    cin>>s;
    m=s.length();
    for(int i=0;i<m;i++)
    {
        if(s[i]=='1')
         c++;
    }
    cout<<s;
    if(c%2==0)
    {
        cout<<"0"<<"\n";
    }
    else
    cout<<"1"<<"\n";
    return 0;
}
