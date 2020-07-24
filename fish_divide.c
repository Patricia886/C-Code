#include<stdio.h>
int main()
{
    int sum,a,b,c,d,e;
    for (sum=6;sum<1000000;sum++)
    {
        if((sum-1)%5==0)
        {
            a = sum;
            if((a/5*4-1)%5==0)
            {
                b=(a-1)/5*4;
                if((b-1)%5==0)
                {
                    c=(b-1)/5*4;
                    if((c-1)%5==0)
                    {
                        d=(c-1)/5*4;
                        if((d-1)%5==0)
                        {
                            e=(d-1)/5*4;
                            if((e-1)%5==0)
                            break;
                        }
                    }
                }
            }
        }
    }
    printf("%d %d %d %d %d\n",a,b,c,d,e);
    return 0;
}