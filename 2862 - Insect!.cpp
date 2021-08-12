//  main.cpp
//  answer 2862 - Insect! online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int num,a;
    cin>>num;
    while(num--)
    {
        cin>>a;
        if(a>8000)
        cout<<"Mais de 8000!"<<endl;
        else
        cout<<"Inseto!"<<endl;
    }
    return 0;
}
