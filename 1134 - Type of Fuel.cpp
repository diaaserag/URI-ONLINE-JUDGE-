//  main.cpp
//  answer 1134 - Type of Fuel uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x,h=0,g=0,d=0;
    while(cin>>x){
        if(x==4)
        break;
        else if(x==1)
        h++;
        else if(x==2)
        g++;
        else if(x==3)
        d++;
    }
    cout<<"MUITO OBRIGADO"<<"\n"<<"Alcool: "<< h <<"\n"<<"Gasolina: "<<  g <<"\n"<<"Diesel: "<< d<<"\n" ;
    
    
    return 0;
}
