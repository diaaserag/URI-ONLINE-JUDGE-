//  main.cpp
//  answer 1113 - Ascending and Descending uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
      if(n==m)
      break;
      else if(n<m)
      cout<<"Crescente"<<"\n";
      else
      cout<<"Decrescente"<<"\n";
    }
    return 0;
}
