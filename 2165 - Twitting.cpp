//  main.cpp
//  answer 2165 - Twitting uri online judge
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
    if(z>140)
              cout<<"MUTE"<<"\n";
              else
        cout<<"TWEET"<<"\n";
        
    return 0;
}
