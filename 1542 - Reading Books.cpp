//  main.cpp
//  answer 1542 - Reading Books uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int a,b,c,q=0,resalt=0;
    while(cin>>a)
    {
        if(a==0)
        break;
        else
        {
         cin>>b>>c;
         q=a*b*c;
         resalt=q/(c-a);
         if(resalt==1)
         cout<<resalt<<" pagina"<<"\n";
         else
         cout<<resalt<<" paginas"<<"\n";
        }
        q=0;
        resalt=0;
    }
    return 0;
}
