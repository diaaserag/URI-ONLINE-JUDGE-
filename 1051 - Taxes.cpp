//  main.cpp
//  answer 1051 - Taxes uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double num,x=0,z=0;
    cin>>num;
    cout<<setprecision(2)<<fixed;
    if(num<=2000.00)
    cout<<"Isento"<<"\n";
    else if(num>2000.00&&num<=3000.00)
    {
        num-=2000.00;
        cout<<"R$ "<<num*0.08<<"\n";
    }
    else if(num>3000.00&&num<=4500.00)
    {
        num-=3000.00;
        x=num*0.18;
        x+=1000.00*0.08;
        cout<<"R$ "<<x<<"\n";
    }
    else if(num>4500.00)
    {
        num-=4500.00;
        x=num*0.28;
        x+=1500*0.18;
        x+=1000*0.08;
        cout<<"R$ "<<x<<"\n";
    }
    return 0;
}
