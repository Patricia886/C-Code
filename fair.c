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
    int k,i,j,h,m,n;
    i=1;
    h=0,n=0;
    scanf("%d",&k);
    j=m=k;
    if(f(k)==1)
    {
        while(k>n)
        {
            n=pow(2,i);
            i++;
        }

        while(n>1)
        {
            n=n/2;
            j=j%n;
m=m/n;
            h=h*10+m;
        }
        printf("%d的二进制为%d",k,h);
    }
    if(f(k)==1&&f(h)==1)
    printf("%d%d",k,h);
return 0;


}