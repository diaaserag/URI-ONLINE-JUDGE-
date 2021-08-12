//  main.cpp
//  answer 1973 - Star Trek uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include <stdio.h>
int main()
{
     long long  n=0;
    scanf("%lld", &n);
      long long sheep[n],stolen[n];
     long long sum_sheep=0,sum_stolen=0, i=0;
    for( i=0;i<n;i++)
    {
        scanf("%lld", &sheep[i]);
        stolen[i]=0;
    }
    i=0;
    while(1)
    {
        if(i==0&&sheep[i]%2==0)//zwgy shemal
        {
            stolen[i]=1;
            if(sheep[i]>0)
              sheep[i]--;
             break;
        }
        else if(i==n-1&&sheep[i]%2==1)//fardy ymen
        {
            stolen[i]=1;
             if(sheep[i]>0)
              sheep[i]--;
             break;
        }
        else if(sheep[i]%2==1)
        {
            sheep[i]--;
            stolen[i]=1;
            i++;
        }
        else if(sheep[i]%2==0)
        {
            stolen[i]=1;
            if(sheep[i]>0)
             sheep[i]--;
             i--;
        }
    }
    for(i=0; i<n; i++)
    {
        sum_sheep += sheep[i];
        sum_stolen += stolen[i];
    }
    printf("%lld %lld\n", sum_stolen, sum_sheep);
    return 0;
}
