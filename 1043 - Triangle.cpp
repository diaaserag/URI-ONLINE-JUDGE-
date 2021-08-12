//  main.cpp
//  answer 1043 - Triangle uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c;
        float ar=1,per=1;
    cin>>a>>b>>c;
    cout<<setprecision(1)<<fixed;
    if(a<(b+c)&&b<(a+c)&&c<(b+a))
    {per=a+b+c;
    cout<<"Perimetro = "<<per<<"\n";}
    else
        {ar=((a+b)*c)/2;
    cout<<"Area = "<<ar<<"\n";}
    return 0;
}
