//  main.cpp
//  answer 1238 - Combiner uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    int count,z=0,x=0;
    string s2,s1;
    cin>>count;
    while(count--)
    {
       cin>>s1>>s2;
       z=s1.length();
       x=s2.length();
       //cout<<s1<<"\n"<<s2<<"\n";
       for(int i=0,j=0;i<z||j<x;i++,j++)
       {
           if(i<z)
           cout<<s1[i];
           if(j<x)
           cout<<s2[j];
           
       }
       cout<<endl;
    }
    return 0;
}
