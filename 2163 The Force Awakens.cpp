//  main.cpp
//  answer 2163 - The Force Awakens uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;

int main()
{
    int r,c,t=0;
    cin>>r>>c;
    int ar[r][c];
    for(int i=0;i<r;i++)
       for(int j=0;j<c;j++)
            cin>>ar[i][j];


for(int i=0;i<r&&t!=100;i++)
        {
        for(int j=0;j<c&&t!=100;j++)
            {
                if(ar[i][j]==42&&ar[i][j-1]==7&&ar[i-1][j]==7&&ar[i][j+1]==7&&ar[i+1][j]==7&&ar[i-1][j-1]==7&&ar[i-1][j+1]==7&&ar[i+1][j+1]==7&&ar[i+1][j-1]==7)
                {
                    int x=i,y=j;
                    cout<<x+1<<" "<<y+1<<endl;
                    t=100;
                }
                
            }
}
if(t==0)
cout<<0<<" "<<0<<endl;
    return 0;
}
