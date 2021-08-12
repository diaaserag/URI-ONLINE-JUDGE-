//  main.cpp
//  answer 1118 - Several Scores with Validation uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<iomanip>
using namespace std;
void non();
void neww();
void av();
void calc();
int main()
{
    int h,ee=0,kk=0;
    calc();
        while(cin>>h){
        if(h==1)
        {neww();calc();}
        else if(h==2)
        {
            neww();
            kk=10;
            break;
        }
        else
        neww();
    }
    return 0;
}
void non()
{
    cout<<"nota invalida"<<"\n";
}
void neww()
{
    cout<<"novo calculo (1-sim 2-nao)"<<"\n";
}
void av(double s)
{
    cout<<setprecision(2)<<fixed;
    cout<<"media = "<< s <<"\n";
}
void calc()
{
    int c=0,cc=0;
    double z=0.0,x,sum=0.0;
    while(cc!=10)
    {
    cin>>x;
    if(x>=0.0&&x<=10.0)
    {
        sum+=x;
        c++;
    }
    else if(x<0.0||x>10.0)
    non();
    if(c==2)
    {
        z=(sum/2.0)*1.0;
        av(z);
        cc=10;
    }
   }
}
