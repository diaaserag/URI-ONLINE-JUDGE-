//  main.cpp
//  answer 2702 - Hard Choiceonline judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>

using namespace std;
int main()
{
      int a,b,c,resalt=0;
      int d,e,f;
      cin>>a>>b>>c;
      cin>>d>>e>>f;
      if(d>a)
      resalt+=d-a;
       if(e>b)
      resalt+=e-b;
       if(f>c)
      resalt+=f-c;
      cout<<resalt<<endl;
    return 0;
}
