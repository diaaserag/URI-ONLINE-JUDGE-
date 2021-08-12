//  main.cpp
//  answer 1240 - Fit or Dont Fit I uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    long long count ,a,b;
    cin>>count;
    while(count--)
    {
        cin>>a>>b;
        if(b>a)
          cout<<"nao encaixa"<<"\n";
        else if(b==a)
               cout<<"encaixa"<<"\n";
        else if(a>b)
        {
            while(a%10==b%10)
            {
                a/=10;
                b/=10;
            }
            if(b==0)
              cout<<"encaixa"<<"\n";
            else
                cout<<"nao encaixa"<<"\n";
        }
    }
    return 0;
}
