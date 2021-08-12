//  main.cpp
//  answer 2765 - Coming Input and Output uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes
#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s;
    int p=0;
    getline(cin,s);
    int t=s.length();
    for(int i=0;i<t;i++)
    {
        if(s[i]==','&&p!=100)
         {
             i++;p=100;
             cout<<endl;
         }
       cout<<s[i];
    }
    cout<<endl;
    return 0;
 }

