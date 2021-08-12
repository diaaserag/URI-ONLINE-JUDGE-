//  main.cpp
//  answer 2170 - Taxes of Project uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long double x,y,z=0.0;
    int c=0;
    while(cin>>x>>y)
    {
                cout<<"Projeto "<<++c<<":"<<endl;
        z=((y/x)-1)*100.0;
        cout<<setprecision(2)<<fixed;

        cout<<"Percentual dos juros da aplicacao: "<< z <<" %"<<endl;
        cout<<endl;
    }
    return 0;
}
