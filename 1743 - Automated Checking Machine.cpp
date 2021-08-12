//  main.cpp
//  answer  1743 - Automated Checking Machine uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    int A,B,C,D,E;
    cin>>a>>b>>c>>d>>e;
    cin>>A>>B>>C>>D>>E;
    if((a==0&&A==0)||(b==0&&B==0)||(c==0&&C==0)||(d==0&&D==0)||(e==0&&E==0))
    cout<<"N"<<"\n";
    else if(((a>0&&A>0)||(b>0&&B>0)||(c>0&&C>0)||(d>0&&D>0)||(e>0&&E>0)))
    cout<<"N"<<"\n";
    else
    cout<<"Y"<<"\n";
    
    return 0;
}

