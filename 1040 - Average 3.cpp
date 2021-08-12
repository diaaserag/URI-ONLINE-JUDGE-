//  main.cpp
//  answer 1040 - Average 3 uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n1,n2,n3,n4,a=0,b=0;
    cin>>n1>>n2>>n3>>n4;
    float n5;
    float av1=1,av2=1;
    cout<<setprecision(1)<<fixed;
    a=n1*2+n2*3+n3*4+n4;
    av1=a/10;
    if(av1>=7)
        {cout<<"Media: "<<av1<<"\n";
    cout<<"Aluno aprovado."<<"\n";}
    else if(av1<5)
        {cout<<"Media: "<<av1<<"\n";
    cout<<"Aluno reprovado."<<"\n";}
    else if(av1>=5 && av1<=6.9)
    {cin>>n5;
        cout<<"Media: "<<av1<<"\n";
        cout<<"Aluno em exame."<<"\n";
        cout<<"Nota do exame: "<<n5<<"\n";
        b=av1+n5;
        av2=b/2;
        if(av2>=5.0)
            cout<<"Aluno aprovado."<<"\n";
        else if(av2<=4.9)
            cout<<"Aluno reprovado."<<"\n";
        cout<<"Media final: "<<av2<<"\n";
    }
    return 0;
}

