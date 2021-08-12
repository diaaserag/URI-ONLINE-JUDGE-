//  main.cpp
//  answer 2344 - Notas da Prova uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int a=0;
    cin>>a;
    if(a==0)
        cout<<"E"<<endl;
    else if(a>0&&a<36)
        cout<<"D"<<endl;
    else if(a>35&&a<61)
         cout<<"C"<<endl;
    else if(a>60&&a<86)
         cout<<"B"<<endl;
    else if(a>85)
         cout<<"A"<<endl;
    return 0;
}
