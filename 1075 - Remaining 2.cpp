//  main.cpp
//  answer 1075 - Remaining 2 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
using namespace std;
class uri
{
    private:
        int x;
    public:
        uri()
        {x=1;}
    void putdata()
    {cin>>x;}
    void displaydata(int y)
    {cout<<y<<"\n";}
    void calc( uri m)
    {
        for(int i=2;i<10000;i++)
        if(i % m.x == 2)
        displaydata(i);
   }
};
int main()
{
    uri num;
    num.putdata();
    num.calc(num);
    return 0;
}
