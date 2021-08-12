//  main.cpp
//  answer 1015 - Distance Between Two Points uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct diaa
{double
x1,y1,x2,y2;
};
int main()
{double a=1.0,b=1.0,c=1.0;
diaa d1,d2;
d1.x1=1.0;
d1.y1=1.0;
d2.x2=1.0;
d2.y2=1.0;
cin>>d1.x1;
cin>>d1.y1;
cin>>d2.x2;
cin>>d2.y2;
a=(d2.x2-d1.x1)*(d2.x2-d1.x1);

b=(d2.y2-d1.y1)*(d2.y2-d1.y1);
c=sqrt(a+b);
cout<<setprecision(4)<<fixed;
cout<<c<<"\n";
    return 0;
}
