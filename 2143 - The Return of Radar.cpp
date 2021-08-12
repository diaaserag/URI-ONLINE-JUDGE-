//  main.cpp
//  answer 2143 - The Return of Radar uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int count ,num;
    long long orders;
    while(cin>>count)
    {
     if(count==0)
        exit(0);
     else
     while(count--)
        {
            cin>>num;
            if(num%2==0)
               orders=(num*2)-2;
            else
            orders=(num*2)-1;
            
            cout<<orders<<"\n";
        }
    }
    return 0;
}
