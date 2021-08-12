//  main.cpp
//  answer 1175 - Array change I uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
using namespace std;
class safe_stack
{
    enum{max=20};
    int st[max],top;
    public:
      safe_stack()
      {
          top=-1;
      }
     bool isembty()//for pop
      {
          if(top==-1)
           return true;
          return false;
      }
     bool isfull()//for poush
     {
         if(top==max-1)
         return true;
         return false;
     }
      
    void poush(int x)
    {
        if(!(isfull()))
        st[++top]=x;
        else
        cout<<"overflow...stack is full"<<"\n";
    }
    int pop()
    {
        if(!(isembty()))
        return st[top--];
        else
        {
            cout<<"underflow..stack is embty"<<"\n";
            return -1;
        }
    }
    
};
int main()
{
    safe_stack d;
    int x;
    for(int i=0;i<20;i++)
    {
        cin>>x;
        d.poush(x);
    }
        for(int i=0;i<20;i++)
    {
        
        cout<<"N["<< i<<"] = "<<d.pop()<<"\n";
    }
    return 0;
}
