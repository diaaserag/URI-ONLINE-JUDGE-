//  main.cpp
//  answer 1214 - Above Average uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int c,n,array[10000];
    int count=0,m=0,av=0;
    float zz=0.0;
    cin>>c;
    while(c--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        for(int j=0;j<n;j++)
        {
            m+=array[j];
        }
        av=m/n;
        for(int h=0;h<n;h++)
        {
            if(array[h]>av)
            count++;
            else
            count=count;
        }
        zz=count*100.0/n;
        cout<<setprecision(3)<<fixed;
        cout<<zz<<"%"<<"\n";
        m=0;
        av=0;
        count=0;
        zz=0;
    }
    return 0;
}
