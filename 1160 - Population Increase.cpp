//  main.cpp
//  answer 1160 - Population Increase uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
 {
    int  x,z,c=0,count;
    float a,b,q=0.0,r=0.0;
    cin>>count;
    while(count--)
    {
        cin>>x>>z>>a>>b;
        q=((x*a)/100.0);
        r=((z*b)/100.0);
        
        while(x<=z&&c<105){
            x+=q;
            z+=r;
            if(r!=0)
            {
                 q=((x*a)/100.0);
                 r=((z*b)/100.0);
            }
            c++;
        }
        if(c<=100)
        cout<<c<<" anos."<<"\n";
        else
        cout<<"Mais de 1 seculo."<<"\n";
        c=0;
    }
    return 0;
 }
