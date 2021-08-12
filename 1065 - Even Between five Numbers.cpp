//  main.cpp
//  answer 1065 - Even Between five Numbers uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    
    int x=5,z,c=0;
    while(x--)
    {
        cin>>z;
        if(z%2==0)
        {
            c++;
        }
    }
    cout<< c <<" valores pares"<<"\n";
    return 0;
}
