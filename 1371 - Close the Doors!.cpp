//  main.cpp
//  answer 1371 - Close the Doors! uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a(25000000);
    int num;
    while(cin>>num)
    {
        if(num==0)
        break;
          for(int i=1;i*i<=num;i++)
             {
                    
                    if(((i+1)*(i+1))>num)
                    cout<<i*i;
                    else
                    cout<<i*i<<" ";
            }
                cout<<endl;
    }
    return 0;
}
