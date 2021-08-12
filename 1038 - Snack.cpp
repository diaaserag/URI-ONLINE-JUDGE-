//  main.cpp
//  answer 1038 - Snack uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int x,y;
cin>>x>>y;
float total=1;
cout<<setprecision(2)<<fixed;
if(x==1)
    {total=4.00*y;
cout<<"Total: R$ "<<total<<"\n";}
else if(x==2)
    {total=4.50*y;
cout<<"Total: R$ "<<total<<"\n";}
else if(x==3)
    {total=5.00*y;
cout<<"Total: R$ "<<total<<"\n";}
else if(x==4)
    {total=2.00*y;
cout<<"Total: R$ "<<total<<"\n";}
else if(x==5)
    {total=1.50*y;
cout<<"Total: R$ "<<total<<"\n";}
return 0;
}
