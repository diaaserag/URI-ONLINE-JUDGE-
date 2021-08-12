//  main.cpp
//  answer 1131 - Grenais uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
void calc(int&,int&,int&);
int main()
{
    int a=0,b=0,c=0,x;
    calc(a,b,c);
    while(cin>>x){
    if(x==1)
    {
      calc(a,b,c);
    }
    else if(x==2)
    {
        cout<< a+b+c <<" grenais"<<"\n";
        cout<<"Inter:"<< a <<"\n";
        cout<<"Gremio:"<< b <<"\n";
        cout<<"Empates:"<< c <<"\n";
        if(a>b)
        cout<<"Inter venceu mais"<<"\n";
        else if(b>a)
        cout<<"Gremio venceu mais"<<"\n";
        else
        cout<<"Nao houve vencedor"<<"\n";
    }
  }
    return 0;
}
void calc(int &nn,int &gg,int &tt)
{
    int n,g;
    cin>>n>>g;
    if(n > g)
    {
        cout<<"Novo grenal (1-sim 2-nao)"<<"\n";
        nn++;
    }
    
    else if( n < g)
    {
        cout<<"Novo grenal (1-sim 2-nao)"<<"\n";
        gg++;
    }
    
        else
    {
        cout<<"Novo grenal (1-sim 2-nao)"<<"\n";
        tt++;
    }
}

