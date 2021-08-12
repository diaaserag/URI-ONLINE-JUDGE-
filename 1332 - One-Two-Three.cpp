//  main.cpp
//  answer 1332 - One-Two-Three uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
#include<string>
int main()
{
    int count,x=0,s1=0,s2=0,s3=0;
    string n;
    cin>>count;
    while(count--)
    {
        cin>>n;
        x=n.length();
        if(x==5)
        {cout<<"3"<<"\n";}
        
        else if(x==3)
        {
            s1=n.find('o');//zero
            s2=n.find('n');//one
            s3=n.find('e');//two
            if((s1==0&&s2==1)||(s1==0&&s3==2)||(s2==1&&s3==2)||(n=="nne")||(n=="oee")||(n=="ooe"))
            cout<<"1"<<"\n";
            else
            cout<<"2"<<"\n";
        }
    }
    return 0;
}
