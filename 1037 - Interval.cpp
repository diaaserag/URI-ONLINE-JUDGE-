//  main.cpp
//  answer 1037 - Interval uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{float number;
cin>>number;
if(number>=0 && number<=25)
    cout<<"Intervalo [0,25]\n";
else if(number>25 && number<=50)
    cout<<"Intervalo (25,50]\n";
else if(number>50 && number<=75)
    cout<<"Intervalo (50,75]\n";
else if(number>75 && number<=100)
    cout<<"Intervalo (75,100]\n";
else
    cout<<"Fora de intervalo\n";
return 0;
}
