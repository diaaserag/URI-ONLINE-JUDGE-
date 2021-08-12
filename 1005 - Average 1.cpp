//  main.cpp
//  answer 1005 - Average 1 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float a=1,b=1,MEDIA,c;
cin>>a>>b;
c=(a*3.5)+(b*7.5);
MEDIA=c/11;
cout<<setprecision(5)<<fixed;
cout<<"MEDIA = "<<MEDIA<<"\n";
return 0;
}
