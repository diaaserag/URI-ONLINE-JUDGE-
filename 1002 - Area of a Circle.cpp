//  main.cpp
//  answer 1002 - Area of a Circle uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include <iostream>
#include<iomanip>
using namespace std;
int main(){
double R,A;
cin>>R;
A=3.14159*(R*R);
cout<<setprecision(4)<<fixed;
cout<<"A=" <<A<<endl;
return 0;
}
