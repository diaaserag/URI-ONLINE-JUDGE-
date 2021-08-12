//  main.cpp
//  answer 1067 - Odd Numbers uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int x;
    while(cin>>x)
    {
        for(int i=1;i<=x;i++)
        {
            if(i%2!=0)
            cout<<i<<"\n";
       }
    }
    
    return 0;
}
