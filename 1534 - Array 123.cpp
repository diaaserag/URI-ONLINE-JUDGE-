//  main.cpp
//  answer 1534 - Array 123 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    
    int num;
    while(cin>>num)
    {
      if(num%2==0)
      {
          for(int i=0;i<num;i++){
             for(int j=0;j<num;j++)
              {
                if(i==j)
                     cout<<"1";
                      else if(i+j==num-1)
                        cout<<"2";
                          else
                            cout<<"3";
              }
              cout<<endl;
          }
     }
     if(num%2!=0)
     {
          for(int i=0;i<num;i++){
             for(int j=0;j<num;j++)
              {

                       if(i+j==num-1)
                         cout<<"2";
                           else if(i==j)
                              cout<<"1";
                                else
                                  cout<<"3";
              }
              cout<<endl;
          }
     }
    }
    return 0;
}
