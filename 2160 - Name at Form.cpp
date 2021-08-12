//  main.cpp
//  answer 2160 - Name at Form uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<string>
#include<cstring>
#include <stdio.h>
using namespace std;
int main()
{
    int z=0;
    char s[650];
    cin.getline(s,600);
    z=strlen(s);
    if(z>80)
              cout<<"NO"<<"\n";
              else
        cout<<"YES"<<"\n";
        
    return 0;
}
