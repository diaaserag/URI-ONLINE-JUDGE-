//  main.cpp
//  answer 1546 - Feedback uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int count,countt,num;
    cin>>count;
    while(count--)
    {
        cin>>countt;
        while(countt--)
        {
            cin>>num;
            if(num==1)
            {
                cout<<"Rolien"<<"\n";
            }
            else if(num==2)
            {
                cout<<"Naej"<<"\n";
            }
            else if(num==3)
            {
                cout<<"Elehcim"<<"\n";
            }
            else if(num==4)
            {
                cout<<"Odranoel"<<"\n";
            }
        }
    }
    
    return 0;
}
