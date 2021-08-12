//  main.cpp
//  answer 1097 - Sequence IJ 3 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int i=-1,j=8,ss=5,s=3;
int main()
{
    while(ss!=0)
    {
        i=i+2;
        j-=1;
        while(s!=0)
        {
            cout<<"I="<< i <<" J="<< j <<"\n";
            
            j-=1;
            s--;
        }
        j+=6;
        ss--;
        s=3;
    }
    
    
    return 0;
}
