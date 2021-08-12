//  main.cpp
//  answer 1253 - Caesar Cipher uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    int count,z=0,x=0,secret=0;
    string s;
    cin>>count;
    while(count--)
    {getline(cin,s);
       getline(cin,s);
        cin>>secret;
        z=s.length();
     for(int i=0;i<z;i++)
        {
                   s[i]=s[i]-secret;
                   if(s[i]>='A'&&s[i]<='Z')
                    cout<<s[i];
                    else
                    {s[i]=s[i]+26;cout<<s[i];}
        }
     cout<<endl;
         
}
    return 0;
}
