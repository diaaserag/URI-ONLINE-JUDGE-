//  main.cpp
//  answer 1042 - Simple Sort uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    if(a1>a2&&a2>a3)
        cout<<""<<a3<<"\n"<<a2<<"\n"<<a1<<"\n";
    else if(a1>a3&&a3>a2)
        cout<<""<<a2<<"\n"<<a3<<"\n"<<a1<<"\n";
    else if(a2>a3&&a3>a1)
        cout<<""<<a1<<"\n"<<a3<<"\n"<<a2<<"\n";
    else if(a2>a1&&a1>a3)
        cout<<""<<a3<<"\n"<<a1<<"\n"<<a2<<"\n";
    else if(a3>a2&&a2>a1)
        cout<<""<<a1<<"\n"<<a2<<"\n"<<a3<<"\n";
    else if(a3>a1&&a1>a2)
        cout<<""<<a2<<"\n"<<a1<<"\n"<<a3<<"\n";
    cout<<"\n";
    cout<<""<<a1<<"\n"<<a2<<"\n"<<a3<<"\n";
    return 0;
}
