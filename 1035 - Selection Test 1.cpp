//  main.cpp
//  answer 1035 - Selection Test 1 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int A,B,C,D,e,f;
    cin>>A>>B>>C>>D;
    e=C+D;
    f=A+B;
    if(B>C&&D>A&&e>f&&C>0&&D>0&&A%2==0)
        cout<<"Valores aceitos"<<"\n";
    else
        cout<<"Valores nao aceitos"<<"\n";
    return 0;
}
