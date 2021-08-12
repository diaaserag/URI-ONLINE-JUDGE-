//  main.cpp
//  answer  1120 - Contract Revision uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,x=0,z=0,q=0,pp=1;;
    string m;
    while(cin>>n>>m)
    {
        if(n==0&&m=="0")
        break;
        x=m.size();
        
        for(int i=0;i<x;i++)
        {
            q+=m[i]-'0';
            if(m[i]-'0'==n)
             q-=m[i]-'0';
            else if(q>0)
             cout<<m[i];
        }
        
        if(q==0)
          cout<<"0"<<"\n";
        else
        cout<<endl;
        q=0;pp=1;
        
    }
    return 0;
}
