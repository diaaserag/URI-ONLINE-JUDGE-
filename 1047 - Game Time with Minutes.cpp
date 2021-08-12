//  main.cpp
//  answer 1047 - Game Time with Minutes uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main(){
    int start,end,s=0,m=0,w=0,b,d,p=0,k=0;
while(cin>>start>>b>>end>>d)
{p=b;k=d;
if(b>d)
{w=0;
    d+=60;
    while(b!=d)
    {
        b++;
        w++;
    }
}
else if(b<d)
{w=0;
    while(b!=d)
    {
        b++;
        w++;
    }
}
else if(b==d)
    {
        w=0;
    }
         if(start>end&&p>k)
    {end+=24;
     while(start!=end)
     {
         start++;
         s++;
     }
     cout<<"O JOGO DUROU "<<s-1<<" HORA(S)"<<" E "<<w<<" MINUTO(S)"<<"\n";}
   else  if(start>end)
    {end+=24;
     while(start!=end)
     {
         start++;
         s++;
     }
     cout<<"O JOGO DUROU "<<s<<" HORA(S)"<<" E "<<w<<" MINUTO(S)"<<"\n";}
         else if(start==end&&p>k)
    {
     cout<<"O JOGO DUROU "<<24-1<<" HORA(S)"<<" E "<<w<<" MINUTO(S)"<<"\n";
        //cout<<"O JOGO DUROU 24 HORA(S)"<<" E "<<w<<" MINUTO(S)"<<"\n";
    }
    else if(start==end)
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<" E "<<w<<" MINUTO(S)"<<"\n";
        //cout<<"O JOGO DUROU "<<24-1<<" HORA(S)"<<" E "<<w<<" MINUTO(S)"<<"\n";
    }

    else if((start<end)&&(start+1==end)&&(p>k))
    {m=0;
    cout<<"O JOGO DUROU "<<m<<" HORA(S)"<<" E "<<w<<" MINUTO(S)"<<"\n";
    }
        else if(start<end)
    {m=0;
        while(start!=end)
        {
            start++;
            m++;
        }
        cout<<"O JOGO DUROU "<<m<<" HORA(S)"<<" E "<<w<<" MINUTO(S)"<<"\n";
    }
}
    return 0;
}
