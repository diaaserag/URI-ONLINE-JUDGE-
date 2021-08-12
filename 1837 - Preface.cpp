//  main.cpp
//  answer 1837 - Preface uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int a,b,q=0,r=0;
    cin>>a>>b;
    if(a==0)
    cout<<"0 0"<<"\n";
    else if(a>0&&b>0)
    {
        q=a/b;
        r=a%b;
        cout<<q<<" "<<r<<"\n";
    }
    else if(a>0&&b<0)
    {
         q=a/b;
        r=a%b;
        cout<<q<<" "<<r<<"\n";
    }
    else if(a<0&&b>0)
    {
        if(a%b==0)
        {
            q=a/b;
            r=0;
            cout<<q<<" "<<r<<"\n";
        }
        else if(a%b!=0)
        {
            q=(a/b)-1;
            r=a-(b*q);
            cout<<q<<" "<<r<<"\n";
        }
    }
    else if(a<0&&b<0)
    {
        if(a%b==0)
        {
            q=a/b;
            r=0;
            cout<<q<<" "<<r<<"\n";
        }
        else if(a%b!=0)
        {
          q=(a/b)+1;
          r=a-(b*q);
          cout<<q<<" "<<r<<"\n";
        }
    }
    return 0;
}
