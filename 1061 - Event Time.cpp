//  main.cpp
//  answer 1061 - Event Time uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string d;
    char mark;
    int dia1,dia2,hour1,hour2,min1,min2,sec1,sec2;
    int dia=0,hour=0,min=0,sec=0;
    cin>>d>>dia1>>hour1>>mark>>min1>>mark>>sec1;
    cin>>d>>dia2>>hour2>>mark>>min2>>mark>>sec2;
    dia=dia2-dia1;
    hour=hour2-hour1;
    min=min2-min1;
    sec=sec2-sec1;
    
    if(sec<0)
    {
        sec+=60;
        min-=1;
    }
    
    if(min<0)
    {
        min+=60;
        hour-=1;
    }
    
    if(hour<0)
    {
        hour+=24;
        dia-=1;
    }
    
    cout<<dia<<" dia(s)"<<"\n";
    cout<<hour<<" hora(s)"<<"\n";
    cout<<min<<" minuto(s)"<<"\n";
    cout<<sec<<" segundo(s)"<<"\n";
    return 0;
}
