//  main.cpp
//  answer 1066 - Even, Odd, Positive and Negative uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int n=5,x,c=0,v=0,p=0,ne=0;
    while(n--)
    {
        cin>>x;
        if(x%2==0)
        c++;
        if(x%2!=0)
        v++;
        if(x>0)
        p++;
        if(x<0)
        ne++;
    }
    cout<< c <<" valor(es) par(es)"<<"\n";
    cout<< v <<" valor(es) impar(es)"<<"\n";
    cout<< p <<" valor(es) positivo(s)"<<"\n";
    cout<< ne <<" valor(es) negativo(s)"<<"\n";
    return 0;
}
