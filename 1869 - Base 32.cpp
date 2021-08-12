//  main.cpp
//  answer 1869 - Base 32 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
     unsigned long long num,a[1000];
     char r;
    while(cin>>num)
    {
        if(num==0)
        {
            cout<<num<<"\n";
            break;
        }
    
    if(num<10)
    cout<<num<<"\n";
    
    else if(num<32)
    {
        r=((num-10)+65);
        cout<<r<<"\n";
    }
    else
    {
        int i=0;
        while(num!=0)
        {
            a[i]=num%32;
            num/=32;
            i++;
        }
        for(int j=i-1;j>=0;j--)
        {
                if(a[j]<10)
    cout<<a[j];
    
    else if(a[j]<32)
    {
        r=((a[j]-10)+65);
        cout<<r;
    }
        }
        cout<<endl;
    }
   }
    return 0;
}
