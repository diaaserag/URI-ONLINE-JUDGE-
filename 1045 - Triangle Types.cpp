//  main.cpp
//  answer 1045 - Triangle Types uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    double a,b,c,aa=0.0,bb=0.0,cc=0.0,x=0.0,x1=0.0;
    cin>>a>>b>>c;
     if (a<b)
{
 
        x =a;
        a =b;
        b = x;
}
 
    if (a<c)
 
    {
 
        x =a;
        a = c;
        c =x;
 
    }
 
    if (b<c)
 
    {
 
        x = b;
        b =c;
        c = x;
 
    }
    
aa=a*a;
    bb=b*b;
    cc=c*c;

    if(a>=b+c)
        cout<<"NAO FORMA TRIANGULO"<<"\n";
else if(aa<bb+cc)
        cout<<"TRIANGULO ACUTANGULO"<<"\n";
else if(aa>bb+cc)
        cout<<"TRIANGULO OBTUSANGULO"<<"\n";
    else if(aa=bb+cc)
     cout<<"TRIANGULO RETANGULO"<<"\n";
     if(a==b && c==b)
        cout<<"TRIANGULO EQUILATERO"<<"\n";
    else if(a==b && a!=c ||a==c && a!=b||b==c&&b!=a)
        cout<<"TRIANGULO ISOSCELES"<<"\n";
    return 0;
}
