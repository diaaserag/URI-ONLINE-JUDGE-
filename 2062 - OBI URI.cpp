//  main.cpp
//  answer 2062 - OBI URI uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,s2[0]='I';
    int num,z=0;
    cin>>num;
    getline(cin,s);
    getline(cin,s);
    z=s.length();
    for(int i=0,j=i+1,k=j+2;i<z;i++,j++,k++)
    {
        if(((s[i]=='o'||s[i]=='O')&&(s[j]=='b'||s[j]=='B')&&(s[k]==' '||s[k]==NULL)&&(k<=z))&&((i==0)||(s[i-1]==' ')))
        {s[j+1]='I';}
        else if(((s[i]=='u'||s[i]=='U')&&(s[j]=='r'||s[j]=='R')&&(s[k]==' '||s[k]==NULL)&&(k<=z))&&((i==0)||(s[i-1]==' ')))
        {s[j+1]='I';}
    }
    for(int i=0;i<z;i++)
    cout<<s[i];
    cout<<endl;
    return 0;
}

