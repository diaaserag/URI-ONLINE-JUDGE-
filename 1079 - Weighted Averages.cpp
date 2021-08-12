//  main.cpp
//  answer 1079 - Weighted Averages uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int count;
    float x[4],re=0.0;
    cin>>count;
    while(count--)
    {
        
        for(int i=0;i<3;i++)
        {
            cin>>x[i];
        }
        re=((x[0]*2)+(x[1]*3)+(x[2]*5))/10;
        cout<<setprecision(1)<<fixed;
        cout<<re<<"\n";
        
    }
    
    return 0;
}
