//  main.cpp
//  answer 1070 - Six Odd Numbers uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int x,c=1;
    while(cin>>x)
    {
        for(int i=x;c<=6;i++)
        {
            if(i%2!=0)
            {
             cout<<i<<"\n";
             c++;
           }
       }
         c=1;
    }
    
    return 0;
}
