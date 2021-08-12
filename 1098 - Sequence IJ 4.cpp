//  main.cpp
//  answer 1098 - Sequence IJ 4 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    for(float i=0,g=0,t=1;i<=2.2;t+=0.2*g)
     {
              cout<<"I="<<i<<" J="<<t<<"\n";
           cout<<"I="<<i<<" J="<<++t<<"\n";
           cout<<"I="<<i<<" J="<<++t<<"\n";
           i+=0.2;t=1;g++;
     }
    return 0;
}
