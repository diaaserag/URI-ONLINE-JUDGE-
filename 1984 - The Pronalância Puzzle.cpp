//  main.cpp
//  answer 1984 - The Pronalância Puzzle uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    long long num,s=0;
    cin>>num;
    
    while(num!=0){
    
       s=num%10;
       num=num/10;
       cout<<s;
   }
   cout<<endl;
    return 0;
}
