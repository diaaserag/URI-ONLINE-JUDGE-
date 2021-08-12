//  main.cpp
//  answer  1235 - Inside Out uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<string>
using namespace std;
int main(){
    int x=0,count,pp=0;
    string a;
    cin>>count;
    pp=count;
    count++;
    while(count--)
    {
        getline(cin,a);
        x=a.size();
        for(int i=(x/2)-1;i>=0;i--)
        cout<<a[i];
        for(int j=x-1;j>=x/2;j--)
        cout<<a[j];
        if(count<pp)
        cout<<endl;
    }
    
    return 0;
}
