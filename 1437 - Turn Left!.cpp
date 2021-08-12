//  main.cpp
//  answer 1437 - Turn Left! uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>

using namespace std;
int main()
{
    int num,d=0,e=0,resalt=0;
    char a[1010];
    while(cin>>num)
    {
        d=0;
        e=0;
        if(num==0)
        break;
        else
        {
            for(int i=0;i<num;i++)
             {
              cin>>a[i];
              if(a[i]=='D')
               d++;
               else
               d+=3;
             }
             e=d%4;
             if(e==1)
             cout<<"L"<<"\n";
             
            else if(e==2)
             cout<<"S"<<"\n";
             
            else if(e==3)
             cout<<"O"<<"\n";
             
             else
             cout<<"N"<<"\n";
        }
    }
    return 0;
}
