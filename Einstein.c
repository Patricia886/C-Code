#include<stdio.h>

int main()
{
    int i,j,k;
    for(i=0;i<500;i++)
    {
        if(i%2==1)
        {
            if(i%3==2)
            {
                if(i%5==4)
                {
                    if(i%6==5)
                    {
                        if(i%7==0)
                        {
                            printf("这条阶梯共有%d阶",i);
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
    
}