//  main.cpp
//  answer 1145 - Logical Sequence 2 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x,y,i=0,g=0;
    cin>>x>>y;
      for(i=1;i<y;)
      {
          for(g=1;g<=x;g++,i++)
          if(g<x)
          {
            cout<<i<<" ";
        }
        else
        cout<<i<<"\n";
            
      }
    
    return 0;
}
