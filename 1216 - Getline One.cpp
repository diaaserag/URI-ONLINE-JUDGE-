//  main.cpp
//  answer 1216 - Getline One uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int x,c=0;
    double resalt=0.0,sum=0.0;
    string s;
    while(getline(cin,s)&&cin>>x)
    {
        getchar();

         sum+=x;
         c++;
    }
    resalt=sum/c*1.0;
    cout<<setprecision(1)<<fixed;
    cout<<resalt<<"\n";
    return 0;
}
