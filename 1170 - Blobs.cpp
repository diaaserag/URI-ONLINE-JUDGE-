//  main.cpp
//  answer 1170 - Blobs uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    
    int count;
    double num,resalt=0,q=0;
    cin>>count;
    while(count--)
    {
        cin>>num;
        while(num>1)
        {
            num=num/2;
            q++;
        }
        cout<<q<<" dias"<<"\n";
        q=0;
    }
    return 0;
}
