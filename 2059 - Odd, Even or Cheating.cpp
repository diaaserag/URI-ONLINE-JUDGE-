//  main.cpp
//  answer 2059 - Odd, Even or Cheating uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,h;
    cin>>a>>b>>c>>d>>h;
    if(d==1&&h==1)
    cout<<"Jogador 2 ganha!"<<"\n";
    else if(d==1&&h==0)
    cout<<"Jogador 1 ganha!"<<"\n";
    else if(d==0&&h==1)
    cout<<"Jogador 1 ganha!"<<"\n";
    else if((b+c)%2==0&&a==1)
    cout<<"Jogador 1 ganha!"<<"\n";
    else if((b+c)%2!=0&&a==0)
    cout<<"Jogador 1 ganha!"<<"\n";
    else
    cout<<"Jogador 2 ganha!"<<"\n";
    return 0;
}
