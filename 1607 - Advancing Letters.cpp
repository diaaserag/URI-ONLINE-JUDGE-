//  main.cpp
//  answer 1607 - Advancing Letters uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    int x=0,y=0,z=0,count=0;
    cin>>count;
    while(count--)
    {
        cin>>s1>>s2;
        x=s1.length();
        y=s2.length();
        for(int i=0,j=0;i<x&&j<y;i++,j++)
        {
            if(s1[i]>s2[j])
            {
                z+=(s2[j]-'0')-(s1[i]-'0');
                z+=26;
            }
            else if(s1[i]<s2[j])
            {
                z+=(s2[j]-'0')-(s1[i]-'0');
            }
        }
        cout<<z<<"\n";
        z=0;
    }
    return 0;
}
