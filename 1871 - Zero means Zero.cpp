//  main.cpp
//  answer 1871 - Zero means Zero uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<string>
using namespace std;
int main()
{
long long int n1,n2,resalt=0;
while(cin>>n1>>n2&&n1&&n2)
{
    resalt=n1+n2;
    string ss= to_string(resalt);
       //cout<<ss.length()<<"   "<<ss[0]<<endl;
         for(int i=0;i<ss.length();i++)
         {
             if(ss[i]!='0')
             cout<<ss[i];
         }
         cout<<endl;
}
    return 0;
}
