//  main.cpp
//  answer 1169 - Grains in a Chess Board uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int n;
    long long x,s=1,m=1;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x<64)
        {
          for(int c=1;c<=x;c++)
         {
            s=s*2;
         }
        
         cout<< (s-1)/12000 <<" kg"<<"\n";
         s=1;
        }
       else if(x==64)
       cout<<"1537228672809129 kg"<<"\n";
    }
    return 0;
}
