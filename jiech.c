#include<stdio.h>
long long jiech(int num)
{
    long long ans;
    if(num==1||num==0)
    ans=1;
    else
    ans=num*jiech(num-1);
    return ans;

}
int main()
{
    int n,anwser;

    printf("请输入要求阶乘的数（要求n<=1000）：");
    scanf("%d",&n);
    while(n>1000)
    {
        printf("输入不符合要求，请重新输入\n");
        scanf("%d",&n);

    }
    anwser=jiech(n);
    printf("%d的阶乘为%lld\n",n,anwser);
    return 0;

}