//  main.cpp
//  answer 1020 - Age in Days uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int age=0,monthes=0,years=0;
cin>>age;
while(age>=365||age>=30)
{
    if(age>=365)
    {
        years=years+1;
        age-=365;
    }
    else if(age>=30)
    {
        monthes=monthes+1;
        age-=30;
    }
    
}
cout<<years<<" ano(s)"<<"\n";
cout<<monthes<<" mes(es)"<<"\n";
cout<<age<<" dia(s)"<<"\n";
    return 0;
}
