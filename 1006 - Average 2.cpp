//  main.cpp
//  answer 1006 - Average 2 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float a=1,b=1,MEDIA,c,d;
cin>>a>>b>>c;
d=(a*2)+(b*3)+(c*5);
MEDIA=d/10;
cout<<setprecision(1)<<fixed;
cout<<"MEDIA = "<<MEDIA<<"\n";
return 0;
}
