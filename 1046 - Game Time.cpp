//  main.cpp
//  answer 1046 - Game Time uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main(){
    int start,end,s=0,m=0;
while(cin>>start>>end)
{     if(start>end)
    {end+=24;
     while(start!=end)
     {
         start++;
         s++;
     }
     cout<<"O JOGO DUROU "<<s<<" HORA(S)"<<"\n";
    }
    else if(start==end)
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<"\n";
    }
    else if(start<end)
    {m=0;
        while(start!=end)
        {
            start++;
            m++;
        }
        cout<<"O JOGO DUROU "<<m<<" HORA(S)"<<"\n";
    }
}
    return 0;
}
