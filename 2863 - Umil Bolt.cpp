//  main.cpp
//  answer 2863 - Umil Bolt online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
      int count;
      float num=1000.2,time;
      while(cin>>count)
      {
          while(count--)
          {
              cin>>time;
              if(time<num)
              num=time;
        }
        cout<<num<<endl;
        num=100000.9;
      }
    return 0;
}
