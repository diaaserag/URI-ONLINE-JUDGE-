//  main.cpp
//  answer  1174 - Array Selection I uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float ar[100];
    for(int i=0;i<100;i++)
    {
        cin>>ar[i];
    }
    cout<<setprecision(1)<<fixed;
        for(int i=0;i<100;i++)
    {
        if(ar[i]<=10)
        cout<<"A["<< i<<"] = "<<ar[i] + 0.0 <<"\n";
    }
    return 0;
}
