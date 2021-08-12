//  main.cpp
//  answer 1728 - Hard to Believe, But True! uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    int oo=0;
    string s,sv;
    while(cin>>s&&s!="0+0=0")
    {
        int a,b,c,d=0,a1=0,b1=0,c1=0,d1=0,d2=0,m=0,m2=0,m1=0;
        char w,r;
        istringstream iss(s);
        iss>>a>>w>>b>>r>>c;
        a1=a;b1=b;c1=c;
        reverse(s.begin(),s.end());
       int qq=0,qq2=0,qq3=0,qqq1=0,qqq2=0,qqq3=0,k1=0,k2=0,k3=0,res1=0,res2=0,res3=0;
        istringstream imm(s);
        imm>>qq>>w>>qq2>>r>>qq3;
        qqq1=qq;qqq2=qq2;qqq3=qq3;
      /*while(qqq1!=0)
        {
            qqq1/=10;
            k1++;
        }
        k1-=1;
        while(qq!=0)
        {
            res1+=(qq%10)*pow(10,k1--);
            qq/=10;
        }
        
        while(qqq2!=0)
        {
            qqq2/=10;
            k2++;
        }
        k2-=1;
        while(qq2!=0)
        {
            res2+=(qq2%10)*pow(10,k2--);
            qq2/=10;
        }
        
        while(qqq3!=0)
        {
            qqq3/=10;
            k3++;
        }
        k3-=1;
        while(qq3!=0)
        {
            res3+=(qq3%10)*pow(10,k3--);
            qq3/=10;
        }*/
        while(a1!=0)
        {
            a1/=10;
            d++;
        }
        d-=1;
        while(a!=0)
        {
            m+=(a%10)*pow(10,d--);
            a/=10;
        }
        
        while(b1!=0)
        {
            b1/=10;
            d1++;
        }
        d1-=1;
        while(b!=0)
        {
            m1+=(b%10)*pow(10,d1--);
            b/=10;
        }
        
        while(c1!=0)
        {
            c1/=10;
            d2++;
        }
        d2-=1;
        while(c!=0)
        {
            m2+=(c%10)*pow(10,d2--);
            c/=10;
        }
        if(m+m1==m2||qq2+qq3==qq)
        cout<<"True"<<"\n";
        else
        cout<<"False"<<"\n";
    }
    cout<<"True"<<"\n";
    return 0;
}
