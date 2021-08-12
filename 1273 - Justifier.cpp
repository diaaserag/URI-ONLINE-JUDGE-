//  main.cpp
//  answer 1273 - Justifier uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    int count;
    string a[100];
    cin>>count;
    while(count)
    {
        int z=0;
           for(int i=0;i<count;i++)
           {
               cin>>a[i];
               if(a[i].length()>z)
               z=a[i].length();
               
          }
          for(int i=0;i<count;i++)
          {
              cout<<setw(z)<<a[i]<<"\n";
          }
          cin>>count;
          if(count>0)
          cout<<endl;
          else
          break;
    }
    
    return 0;
}

