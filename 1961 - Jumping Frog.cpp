//  main.cpp
//  answer 1961 - Jumping Frog uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y,a[1000],z=0;
    cin>>x>>y;
    for(int i=0;i<y;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<y-1;i++)
    {
        z=abs(a[i]-a[i+1]);
        if(z>x){
        cout<<"GAME OVER"<<"\n";
        return 0;
        }
    }
    cout<<"YOU WIN"<<"\n";
    return 0;
}
