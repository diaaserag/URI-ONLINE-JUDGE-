//  main.cpp
//  answer 2139 - Pedrinho's Christmas uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include <stdio.h>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
       int m,d;
       while(cin>>m>>d)
       {
         if(m==12&&d==25)
                  cout<<"E natal!"<<"\n";
            else if(m==12&&d==24)
               cout<<"E vespera de natal!"<<"\n";
         else if(m==12&&d>25)
              cout<<"Ja passou!"<<"\n";
         else
         {
             if(m==11)printf("Faltam %d dias para o natal!\n", 25+30-d);
         if(m==10)printf("Faltam %d dias para o natal!\n", 31+25+30-d);
         if(m==9)printf("Faltam %d dias para o natal!\n", 30+31+25+30-d);
         if(m==8)printf("Faltam %d dias para o natal!\n", 31+30+31+25+30-d);
         if(m==7)printf("Faltam %d dias para o natal!\n", 31+31+30+31+25+30-d);
         if(m==6)printf("Faltam %d dias para o natal!\n", 30+31+31+30+31+25+30-d);
         if(m==5)printf("Faltam %d dias para o natal!\n", 31+30+31+31+30+31+25+30-d);
         if(m==4)printf("Faltam %d dias para o natal!\n", 30+31+30+31+31+30+31+25+30-d);
         if(m==3)printf("Faltam %d dias para o natal!\n", 31+30+31+30+31+31+30+31+25+30-d);
         if(m==2)printf("Faltam %d dias para o natal!\n", 29+31+30+31+30+31+31+30+31+25+30-d);
         if(m==1)printf("Faltam %d dias para o natal!\n", 31+29+31+30+31+30+31+31+30+31+25+30-d);
         }
                     
       }
    return 0;
}
