//  main.cpp
//  answer 1828 - Bazinga! uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string pa="papel",pe="pedra",la="lagarto",te="tesoura",sp="Spock";
    string sh,rj;
    int count,c=0;
    cin>>count;
    while(count--)
    {
        c++;
        cin>>sh>>rj;
         if(sh==rj)
         cout<<"Caso #"<<c<<": "<<"De novo!"<<"\n";
         
         else if(sh==sp&&rj==te)
         cout<<"Caso #"<<c<<": "<<"Bazinga!"<<"\n";
         
         else if(sh==te&&rj==la)
         cout<<"Caso #"<<c<<": "<<"Bazinga!"<<"\n";
         
         else if(sh==la&&rj==pa)
         cout<<"Caso #"<<c<<": "<<"Bazinga!"<<"\n";
         
         else if(sh==pe&&rj==te)
         cout<<"Caso #"<<c<<": "<<"Bazinga!"<<"\n";
         
         else if(sh==te&&rj==pa)
         cout<<"Caso #"<<c<<": "<<"Bazinga!"<<"\n";
         
         else if(sh==pa&&rj==pe)
         cout<<"Caso #"<<c<<": "<<"Bazinga!"<<"\n";
         
         else if(sh==pe&&rj==la)
         cout<<"Caso #"<<c<<": "<<"Bazinga!"<<"\n";
         
         else if(sh==la&&rj==sp)
         cout<<"Caso #"<<c<<": "<<"Bazinga!"<<"\n";
         
         else if(sh==pa&&rj==sp)
         cout<<"Caso #"<<c<<": "<<"Bazinga!"<<"\n";
         
         else if(sh==sp&&rj==pe)
         cout<<"Caso #"<<c<<": "<<"Bazinga!"<<"\n";
         
         else
         cout<<"Caso #"<<c<<": "<<"Raj trapaceou!"<<"\n";
    }
}
