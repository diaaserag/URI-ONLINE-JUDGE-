//  main.cpp
//  answer 1073 - Even Square uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
   int x;
   while(cin>>x)
 {
    for(int i=1;i<=x;i++)
    if(i%2==0)
    cout<< i <<"^"<< "2" <<" = "<< i*i <<"\n";
 }
    return 0;
}
