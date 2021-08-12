//  main.cpp
//  answer 1179 - Array Fill IV uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
int main()
{
    int num[15],par[5],od[5],z=0,f=0,d=0;
    for(int i=0;i<15;i++)
    {
         cin>>num[i];
        if(num[i]%2==0)
        {
            par[z]=num[i];
            z++;
            if(z==5)
            {
                for(int a=0;a<z;a++)
                {
                    cout<<"par["<<a<<"] = "<<par[a]<<"\n";
                }
                z=0;d=1;
            }
        }
        else
        {
          od[f]=num[i];
            f++;
            if(f==5)
            {
                for(int y=0;y<f;y++)
                {
                    cout<<"impar["<<y<<"] = "<<od[y]<<"\n";
                }
                f=0;d=2;
            }
        }
    }
                                for(int y=0;y<f;y++)
                {
                    cout<<"impar["<<y<<"] = "<<od[y]<<"\n";
                }

                    for(int a=0;a<z;a++)
                {
                    cout<<"par["<<a<<"] = "<<par[a]<<"\n";
                }
    return 0;
}
