//  main.cpp
//  answer 1957 - Converting to Hexadecimal uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    long long num;
    int a[1000];
    int i=0;
    cin>>num;
    while(1)
    {
        if(num<=15)
        {
            a[i]=num;
            break;
        }
        else
        {
            a[i]=num%16;
            num/=16;
        }
        i++;
    }
    //cout<<i<<"\n";
    for(int f=i;f>=0;f--)
    {
        if(a[f]==10)
           cout<<"A";
           else if(a[f]==11)
              cout<<"B";
                else if(a[f]==12)
                  cout<<"C";
                    else if(a[f]==13)
                      cout<<"D";
                        else if(a[f]==14)
                          cout<<"E";
                            else if(a[f]==15)
                              cout<<"F";
                                else
                                  cout<<a[f];
    }
    cout<<endl;
    return 0;
}
