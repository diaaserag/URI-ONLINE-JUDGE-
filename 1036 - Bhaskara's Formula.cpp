//  main.cpp
//  answer 1036 - Bhaskara's Formula uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double A,B,C;
    cin>>A>>B>>C;
    double e=1,f=1,x1=1,x2=1;
     
    e=(B*B)-(4*A*C);
    f=sqrt(e);
   
    if(A==0||e<0)
    {   cout<<"Impossivel calcular"<<"\n";}
    else
        {
             x1=(-B+f)/(2*A);
             x2=(-B-f)/(2*A);
            cout<<setprecision(5)<<fixed;
            cout<<"R1 = "<<x1<<"\n";
         cout<<"R2 = "<<x2<<"\n";
    }
    return 0;
}
