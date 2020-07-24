#include<stdio.h>
#include<math.h>
int sushu(int num);
int fanzhuan(int n);
int main()
{
int i,j,a,b;
for(i=1000;i<=9999;i++)
{
    if(sushu(i)==1)
    {
    b=fanzhuan(i);
    if(sushu(b)==1)
    printf("%d\t",i);
    }
    // printf("%d    ",b);
}
    return 0;
}
int sushu(int num)
{
    int i;
    for(i=2;i<=sqrt(num);i++)
    {
        if (num%i==0)
        return 0;
    }
    return 1;
}
int fanzhuan(int n)
{
    int a,b;
    b=0;
    while(n>0)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
   return b;
}