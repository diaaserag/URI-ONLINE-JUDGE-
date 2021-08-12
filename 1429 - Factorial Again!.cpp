//  main.cpp
//  answer 1429 - Factorial Again! uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes
#include<iostream>
#include<string>
using namespace std;
long int fact(int x){
    if(x==1||x==0)
    return 1;
    return x*fact(x-1);
}
int main()
{
    int n=0,c=0;
    string a;
    while(cin>>a)
    {
        if(a=="0")
        {break;}
        else
        {
            n=a.length();
            for(int i=0;i<n;i++)
            {
                c+=(a[i]-'0')*fact(n-i);//-'0'convert from string to int
            }
        }
        cout<<c<<"\n";
        c=0;
    }
    return 0;
}

