//  main.cpp
//  answer 1983 - The Chosen uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    long long num,want=0;
    float score,temp=0.0;
    int count,c=0;
    cin>>count;
    while(count--)
    {
        cin>>num>>score;
      if(score>=8&&score>temp)
      {
        want=num;
        temp=score;
        c++;
      }
    }
    if(c>0)
    cout<<want<<"\n";
    else
    cout<<"Minimum note not reached"<<"\n";
    return 0;
}
