#include<stdio.h>
#include<math.h>
int f(int n)
{
 int a,b,c;
    b=0;
    c=n;
    while(c>0)
    {
        a=c%10;
        b=b*10+a;
        c=c/10;
    }
if(b==n)
    return 1;
else
    return 0;
}
int main()
{
    int a[100];
    int k,j,i,h,shang;
    int state=1;
    i=0;
    scanf("%d",&k);
    shang=k;
    if(f(k)==1)
    {
        while(1)
        {
            a[i]=shang%2;
            shang=shang/2;
            i++;
            if(shang<1) break;
        }
        //
        for(h=0;h<(i/2);h++)
        {
            if(a[h]!=a[i-h-1]) 
            {
                state=0;
                break;
            }
        }
        if(state==1) 
        {
            printf("%d以及其二进制均为对称数，分别为%d\t",k,k);
            for(j=i-1;j>=0;j--)
            {
                printf("%d",a[j]);
            }
        }    

    }

return 0;
}