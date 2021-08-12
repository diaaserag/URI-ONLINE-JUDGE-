//  main.cpp
//  answer 1068 - Parenthesis Balance I uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<string>
using namespace std;
class stackk
{
    private:
        enum{max=100000};
        char arr[max];
        int top;
        public:
            stackk(){ top=-1;}
            bool is_empty();
            bool is_full();
            void push(char x);
            char pop();
};
bool stackk::is_full()
{
    if(top==max-1)
     return true;
      return false;
}
void stackk::push(char x)
{
    if(!(is_full()))
    arr[++top]=x;
//     else
//     cout<<"sory you can,t push stack is full"<<"\n";
}
bool stackk::is_empty()
{
    if(top==-1)
     return true;
       return false;
}
char stackk::pop()
{
    if(!(is_empty()))
    return arr[top--];
    return 'f';
}
int main()
{
    stackk s;
    string x;
    int c=0,n=0;
    while(getline(cin,x)){
        n=x.size();
    for(int i=0;i<n;i++)
    {
        if(x[i]=='(')
        {s.push(x[i]);c++;}
        else if(x[i]==')')
        {s.pop();c--;}
    }
    if(s.is_empty()&&c==0)
    cout<<"correct"<<"\n";
    else
    cout<<"incorrect"<<"\n";c=0;n=0;
    while(!(s.is_empty()))
    {
        s.pop();
    }
    }
    return 0;
}
