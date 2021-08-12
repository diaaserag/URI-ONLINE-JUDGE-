//  main.cpp
//  answer 1117 - Score Validation uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n,x=0.0,sum=0.0;
    int c=0;
    while(cin>>n)
    {
      if( n>=0.0 && n<= 10.0)
      {
          sum+=n;
          c++;
      }
      else
      cout<<"nota invalida"<<"\n";
      if(c==2)
      {
         x = (sum / 2)*1.0;
          cout<<setprecision(2)<<fixed;
          cout<<"media = "<< x <<"\n";
          break;
      }
    }
    return 0;
}
