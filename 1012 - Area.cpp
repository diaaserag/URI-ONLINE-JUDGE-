//  main.cpp
//  answer 1012 - Area uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    float A=1.0,B=1.0,C=1.0;
    cin>>A>>B>>C;
    double TRIANGULO ,CIRCULO,RAPEZIO,QUADRADO,RETANGULO,h=1;
     TRIANGULO=(A*C)/2;
     h=3.14159*C;
     CIRCULO=h*C;
     RAPEZIO=((A+B)*C)/2;
     QUADRADO=B*B;
     RETANGULO=A*B;
     cout<<setprecision(3)<<fixed;
     cout<<"TRIANGULO: "<<TRIANGULO<<"\n";
     cout<<"CIRCULO: "<<CIRCULO<<"\n";
     cout<<"TRAPEZIO: "<<RAPEZIO<<"\n";
     cout<<"QUADRADO: "<<QUADRADO<<"\n";
     cout<<"RETANGULO: "<<RETANGULO<<"\n";
    return 0;

}
