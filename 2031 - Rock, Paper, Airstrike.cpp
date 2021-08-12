//  main.cpp
//  answer 2031 - Rock, Paper, Airstrike uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string ch1,ch2,at,pe,pa;
    cin>>n;
    at="ataque";
    pe="pedra";
    pa="papel";
    while(n--)
    {
        cin>>ch1>>ch2;
        if(ch1==at&&ch2==at)
        cout<<"Aniquilacao mutua"<<"\n";
        else if(ch1==at&&ch2==pe)
        cout<<"Jogador 1 venceu"<<"\n";
        else if(ch1==pe&&ch2==pa)
        cout<<"Jogador 1 venceu"<<"\n";
        else if(ch1==at&&ch2==pa)
        cout<<"Jogador 1 venceu"<<"\n";
        else if(ch1==pa&&ch2==pa)
        cout<<"Ambos venceram"<<"\n";
        else if(ch1==pe&&ch2==pe)
        cout<<"Sem ganhador"<<"\n";
        else
        cout<<"Jogador 2 venceu"<<"\n";
    }
    return 0;
}
