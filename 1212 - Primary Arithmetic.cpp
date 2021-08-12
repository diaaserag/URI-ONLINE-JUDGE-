//  main.cpp
//  answer 1212 - Primary Arithmetic uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    long long num1,num2,m1=0,m2=0,count=0;
    while(cin>>num1>>num2)
    {
        count=0;m1=0;m2=0;
        if(num1+num2==0)
        break;
        else
        {
            while(num1>0||num2>0)
            {
                if(m1+m2>9){
                   m1=num1%10;m1+=1;
                   m2=num2%10;
                                 num1=num1/10;
                                 num2=num2/10;
                }
                else if(m1+m2<10){
                   m1=num1%10;
                   m2=num2%10;
                                   num1=num1/10;
                                num2=num2/10;
             }
             if(m2+m1>9)
             count++;
           }
        }
        if(count==0)
        cout<<"No carry operation."<<"\n";
        else if(count==1)
        cout<<count<<" carry operation."<<"\n";
        else
        cout<<count<<" carry operations."<<"\n";
        
    }
    return 0;
}
