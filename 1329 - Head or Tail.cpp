//  main.cpp
//  answer 1329 - Head or Tail uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int count,a,x=0,y=0;
    while(cin>>count)
    {
        if(count==0)
        break;
        else
        {
          for(int i=0;i<count;i++)
          {
              cin>>a;
              if(a==0)
              x++;
              else if(a==1)
              y++;
          }
            
            cout<<"Mary won "<<x<<" times and John won "<<y<<" times"<<"\n";
        }
        x=0;
        y=0;
    }
    return 0;
}
