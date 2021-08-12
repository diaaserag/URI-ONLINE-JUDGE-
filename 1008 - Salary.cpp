//  main.cpp
//  answer 1008 - Salary uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int employee, hours=1;
    float amount=1,SALARY=1;
    cin>> employee>> hours>>amount;
    SALARY= hours*amount;
    cout<<"NUMBER = "<<employee<<"\n";
    cout<<setprecision(2)<<fixed;
    cout<<"SALARY = U$ "<<SALARY<<"\n";
return 0;
}
