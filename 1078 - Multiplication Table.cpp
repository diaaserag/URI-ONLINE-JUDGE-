//  main.cpp
//  answer 1078 - Multiplication Table uri online judge
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
    void displaydata(int y,uri c)
    {cout<<y<<" x "<<x<<" = "<<c.x<<"\n";}
    void calc( uri m)
    {
        uri z;
        int i;
        for( i=1;i<=10;i++)
        {
         z.x=i * m.x;
         displaydata(i,z);
        }
   }
};
int main()
{
    uri num;
    num.putdata();
    num.calc(num);
    return 0;
}
