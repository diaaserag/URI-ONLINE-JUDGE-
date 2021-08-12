//  main.cpp
//  answer 1044 - Multiples uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    if(A>B&&A%B==0)
        cout<<"Sao Multiplos"<<"\n";
    else if(B>A&&B%A==0)
        cout<<"Sao Multiplos"<<"\n";
    else
        cout<<"Nao sao Multiplos"<<"\n";
    return 0;
}
