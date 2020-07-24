#include<stdio.h>
#define N 100
int main()
{
    int a[N];
    int i,j,k,h;
    for(k=0;k<N;k++)
    {
        a[k]=k+1;
    }
    for(i=2;i<N;i++)
    {
        for(j=i;j<N;j++)
        {
            if(a[j]!=1&&a[j]%i==0)
                a[j]=1;
        }
    }
    for(h=0;h<N;h++)
    {
        if(a[h]!=1)
        printf("%d\t",a[h]);
    }
return 0;
}