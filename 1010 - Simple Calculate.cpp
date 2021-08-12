//  main.cpp
//  answer 1010 - Simple Calculate uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
#include<iomanip>
int main()
{

    int code1,number1;
    float price1,x,z,v;
    cin>>code1>>number1>>price1;
    int code2,number2;
    float price2;
    cin>>code2>>number2>>price2;
    x=number1*price1;
    z=number2*price2;
    v=x+z;
    cout<<setprecision(2)<<fixed;
    cout<<"VALOR A PAGAR: R$ "<<v<<"\n";
    return 0;
}
