//  main.cpp
//  answer 1080 - Highest and Position uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int x[101],temp=0,count=0;
    cin>>x[0];
    temp=x[0];
    for(int i=1;i<100;i++)
    {
        cin>>x[i];
        
        if(x[i]>temp)
        {
            temp=x[i];
            count=i;
        }
    }
    cout<<temp<<"\n"<<count+1<<"\n";
    
    return 0;
}
