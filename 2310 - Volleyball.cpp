//  main.cpp
//  answer 2310 - Volleyball uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
int main()
{
   int n,s=0,b=0,a=0,s1=0,b1=0,a1=0;
   int ss=0,ss1=0,bb=0,bb1=0,aa=0,aa1=0;
   string name;
   cin>>n;
   while(n--)
    {
        cin>>name;
        cin>>s>>b>>a;
        cin>>s1>>b1>>a1;
        ss+=s; bb+=b; aa+=a;
        
        ss1+=s1; bb1+=b1; aa1+=a1;
        
    }
    float q1,q2,q3;
    q1=(static_cast<float>(ss1)*100.0)/static_cast<float>(ss);
    q2=(static_cast<float>(bb1)*100.0)/static_cast<float>(bb);
    q3=(static_cast<float>(aa1)*100.0)/static_cast<float>(aa);
    cout<<setprecision(2)<<fixed;
    cout<<"Pontos de Saque: "<< q1 <<" %."<<"\n";
    cout<<"Pontos de Bloqueio: "<< q2 <<" %."<<"\n";
    cout<<"Pontos de Ataque: "<< q3 <<" %."<<"\n";
   return 0;
}

