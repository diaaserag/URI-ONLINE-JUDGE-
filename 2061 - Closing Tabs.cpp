//  main.cpp
//  answer 2061 - Closing Tabs uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string a[555];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        if(a[i]=="fechou")
        n++;
        else
        n--;
    }
    cout<<n<<"\n";
    return 0;
}
