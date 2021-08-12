//  main.cpp
//  answer 2221 - Pomekons Battle uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
   int count,bouns,ai1,bi1,li1,ai2,bi2,li2,val1=0,val2=0;
   cin>>count;
   while(count--)
   {
         cin>>bouns;
          cin>>ai1>>bi1>>li1;
            cin>>ai2>>bi2>>li2;
            val1=(ai1+bi1)/2;
            val2=(ai2+bi2)/2;
            if(li1%2==0)
            val1+=bouns;
            if(li2%2==0)
            val2+=bouns;
       if(val1>val2)
       cout<<"Dabriel"<<"\n";
       else if(val2>val1)
       cout<<"Guarte"<<"\n";
       else
       cout<<"Empate"<<"\n";
   }
    return 0;
}
