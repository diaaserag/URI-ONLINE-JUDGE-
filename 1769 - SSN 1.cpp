//  main.cpp
//  answer 1769 - SSN 1 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()

{
     int a[15];
    string s;
    while(cin>>s){
    int c=1,n=9,p1=0,p2=0;
    
    for(int i=0;i<14;i++)
    {
        
        if(s[i]!='.'&&s[i]!='_'&&s[i]!='-'&&i!=12&&i!=13)
        {
            p1+=(s[i]-'0')*c++;
            p2+=(s[i]-'0')*n--;
        }
    }
         p1=p1%11;
         p2=p2%11;
    if (p1 == 10) p1 = 0;
    if (p2 == 10) p2 = 0;
    if (p1 == (s[12]-'0') && p2 == (s[13]-'0'))
    {
      cout << "CPF valido" << endl;
    }
    else
     {
      cout << "CPF invalido" << endl;
    }
}
    return 0;
}

