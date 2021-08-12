//  main.cpp
//  answer 1178 - Array Fill III uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double arr[100];
    double g=0.0,x;
    cin>>x;
    for(int i=0;i<100;i++){
        cout<<setprecision(4)<<fixed;
       cout<<"N["<< i <<"] = "<< x <<"\n";x=x/(2*1.0);}
    return 0;
}
