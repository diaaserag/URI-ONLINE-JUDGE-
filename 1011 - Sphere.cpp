//  main.cpp
//  answer 1011 - Sphere uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    int R;
    cin>>R;
    double VOLUME,c;
    c=4.0/3.0;
    VOLUME=c*3.14159*R*R*R;
    cout<<setprecision(3)<<fixed;
    cout<<"VOLUME = "<<VOLUME<<"\n";
    return 0;
}
