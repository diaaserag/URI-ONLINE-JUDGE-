//  main.cpp
//  answer 1017 - Fuel Spent uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int time=1,avrage=1,distance;
double fule,c=1.0;
cin>>time>>avrage;
distance=time*avrage;
fule=distance/12.0*c;
cout<<setprecision(3)<<fixed;
cout<<fule<<"\n";
    return 0;
}

