//  main.cpp
//  answer 1865 - Mjölnir uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int b,count;
    string a;
    cin>>count;
    while(count--)
    {
        cin>>a>>b;
        if(a=="Thor")
        cout<<"Y"<<"\n";
        else
        cout<<"N"<<"\n";
    }
    
    return 0;
}
