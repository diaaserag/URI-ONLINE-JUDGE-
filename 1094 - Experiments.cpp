//  main.cpp
//  answer 1094 - Experiments uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int c=0,r=0,s=0;
double oop,oop2,oop3;
class diaa
{
    private:
        int x,n;
        char ch;
    public:
     diaa()
    {
        x=1;
        ch=' ';
    }
    ~diaa()
    {}
    void putdata()
    {
        cin>>n;
        for(int i;i<n;i++)
        {
            cin>>x>>ch;
            play(x,ch);
        }
    }
    void play(int w,char f)
    {
        if(f=='C')
        {c+=x; }
        if(f=='R')
        {r+=x;}
        if(f=='S')
        {s+=x;}
    }
    void display()
    {
        float pp=0.0;
        cout<<"Total: "<< c+r+s <<" cobaias"<<"\n";
        cout<<"Total de coelhos: "<< c <<"\n";
        cout<<"Total de ratos: "<< r <<"\n";
        cout<<"Total de sapos: "<< s <<"\n";
        pp=r+c+s;
        oop=(c*100.00)/pp;
        oop2=(r*100.00)/pp;
        oop3= (s*100.00)/pp;
        cout<<setprecision(2)<<fixed;
        cout<<"Percentual de coelhos: "<<oop  <<" %"<<"\n";
        cout<<"Percentual de ratos: "<< oop2 <<" %"<<"\n";
        cout<<"Percentual de sapos: "<<oop3 <<" %"<<"\n";
    }
    
};
int main()
{
    diaa h;
    h.putdata();
    h.display();
    return 0;
}
