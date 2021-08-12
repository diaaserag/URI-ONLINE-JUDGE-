//  main.cpp
//  answer 1193 - Base Conversion uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes


#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    int count,q,d=0,lo=1,p=0,loo=0,t=1,k=0,m=0,num=0,v=0,numm=0,case_num=0;
    string a,c;
    int h[500],b[100],bb[100];
    cin>>count;
    while(count--)
    {
        case_num++;
        
        cin>>a>>c;
        cout<<"Case "<<case_num<<":"<<"\n";
        q=a.length();
        if(c=="bin")
        {
            for(int i=q-1,j=0;i>=0;i--,j++)
            {
                p=j;
                while(p--)
                {
                    lo*=2;
                }
                d+=lo*(a[i]-'0');
                lo=1;
            }
            num=d;
            while(1)
            {
                h[k]=num%16;
                num=num/16;
                k++;
                if(num==0)
                break;
            }
            cout<<d<<" dec"<<"\n";
        if(k==0)
        cout<<h[0]<<" hex"<<"\n\n";
        else
     {
        for(int u=k-1;u>=0;u--)
         {
            if(h[u]==10)
          cout<<"a";
          else if(h[u]==11)
          cout<<"b";
          else if(h[u]==12)
          cout<<"c";
          else if(h[u]==13)
          cout<<"d";
          else if(h[u]==14)
          cout<<"e";
          else if(h[u]==15)
          cout<<"f";
          else cout<<h[u];
         }
         cout<<" hex"<<"\n\n";
         d=0;k=0;
    }

        }
        else if(c=="dec")
      {
            v=0;
            int ww=a.length();
            for(int pp=0;pp<ww;pp++)
            {
                int zz=(ww-pp)-1;
                numm+=(a[pp]-'0')*pow(10,zz);
                //cout<<numm<<"\n\n";
            }
            int ddd=numm;
            while(1)
            {
                b[v]=numm%2;
                numm=numm/2;
                v++;
                if(numm==0)
                break;
            }
            int gg=0;
            while(1)
            {
                h[gg]=ddd%16;
                ddd=ddd/16;
                gg++;
                if(ddd==0)
                break;
            }
        if(gg==0)
        cout<<h[0]<<" hex"<<"\n";
        else
     {
        for(int u=gg-1;u>=0;u--)
         {
            if(h[u]==10)
          cout<<"a";
          else if(h[u]==11)
          cout<<"b";
          else if(h[u]==12)
          cout<<"c";
          else if(h[u]==13)
          cout<<"d";
          else if(h[u]==14)
          cout<<"e";
          else if(h[u]==15)
          cout<<"f";
          else cout<<h[u];
         }
         cout<<" hex"<<"\n";
         gg=0;
            for(int ff=v-1;ff>=0;ff--)
            {
              cout<<b[ff];
            }
            cout<<" bin"<<"\n\n";
            v=0;
     }}
        else if(c=="hex")
         {
             int dh=0;
            for(int i=q-1,j=0;i>=0;i--,j++)
            {
                if(a[i]=='f')
                dh+=15*pow(16,j);
                else if(a[i]=='e')
                dh+=14*pow(16,j);
                else if(a[i]=='d')
                dh+=13*pow(16,j);
                else if(a[i]=='c')
                dh+=12*pow(16,j);
                else if(a[i]=='b')
                dh+=11*pow(16,j);
                else if(a[i]=='a')
                dh+=10*pow(16,j);
                else
                dh+=(a[i]-'0')*pow(16,j);
            }
            cout<<dh<<" dec"<<"\n";
            int nu=dh;
            while(1)
            {
                bb[v]=nu%2;
                nu=nu/2;
                v++;
                if(nu==0)
                break;
            }
            for(int ff=v-1;ff>=0;ff--)
            {
              cout<<bb[ff];
            }
            cout<<" bin"<<"\n\n";
            v=0;dh=0;
         }
      
   }
     return 0;
}
