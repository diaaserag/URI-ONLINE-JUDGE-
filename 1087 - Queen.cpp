//  main.cpp
//  answer 1087 - Queen uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,c=0,v=0;
    while(cin>>x1>>y1>>x2>>y2)
    {
        c=0;v=0;
        if(x1==0&&x2==0&&y1==0&&y2==0)
        {
            break;
        }
       else if(x1==x2&&y1==y2)
         {cout<<"0"<<"\n"; c=1;v=5;}
       else if(x1>x2&&y1>y2)
      {
        c=1;
          if(x1-x2==y1-y2)
          {cout<<"1"<<"\n";v=5;}
      }
      else if(x1<x2&&y1<y2)
      {
        c=1;
          if(x2-x1==y2-y1)
          {cout<<"1"<<"\n"; v=5;}
      }
       else if(x1>x2&&y1<y2)
      {
        c=1;
          if(x1-x2==y2-y1)
          {cout<<"1"<<"\n";v=5; }
      }
      else if(x1<x2&&y1>y2)
       {
         c=1;
          if(x2-x1==y1-y2)
          {cout<<"1"<<"\n";v=5; }
      }
            else if(x1!=x2&&y1==y2)
       {
         
          {cout<<"1"<<"\n";v=5;c=1; }
      }
      else if(x1==x2&&y1!=y2)
             {
         
              {cout<<"1"<<"\n";v=5;c=1; }
           }
       if((c==0)||(c==1&&v==0))
      {cout<<"2"<<"\n";}
      c=0;v=0;
    }
    return 0;
}
