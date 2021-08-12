//  main.cpp
//  answer 1019 - Time Conversion uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{

    int N=1,minutes=0,hours=0;
        cin>>N;
    
        while (N>=60||minutes>=60)
{
        if(N>=60)
            {
                minutes++;
                N-=60;
           }
        else if(minutes>=60)
             {
                 hours++;
                minutes-=60;
             }
    
}
cout<<hours<<":"<<minutes<<":"<<N<<"\n";
    return 0;
}
