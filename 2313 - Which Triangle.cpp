//  main.cpp
//  answer 2313 - Which Triangle uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int a[4],x=0,f=0,r=0;
   cin>>a[0]>>a[1]>>a[2];
   for(int i=0;i<2;i++)
    for(int j=i+1;j<3;j++)
       {
           if(a[i]>a[j])
           {
               x=a[i];
               a[i]=a[j];
               a[j]=x;
           }
       }
       f=(a[0]*a[0])+(a[1]*a[1]);
       r=a[2]*a[2];
       if(a[0]+a[1]<=a[2])
       {
           cout<<"Invalido"<<"\n";
           exit(0);
       }
       else if((a[0]==a[1]&&a[0]==a[2]))
       {
           cout<<"Valido-Equilatero"<<"\n";
           cout<<"Retangulo: N"<<"\n";
       }
       else if(a[0]!=a[1]&&a[0]!=a[2]&&a[1]!=a[2])
       {
           cout<<"Valido-Escaleno"<<"\n";
              if(f==r)
               cout<<"Retangulo: S"<<"\n";
               else
               cout<<"Retangulo: N"<<"\n";
       }
       else
       {
           cout<<"Valido-Isoceles"<<"\n";
              if(f==r)
               cout<<"Retangulo: S"<<"\n";
               else
               cout<<"Retangulo: N"<<"\n";
       }
    return 0;
}
