#include <stdio.h>

void Print_Factorial (int N );

int main()
{
    int N;
	
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */
void Print_Factorial(const int N)
{
    int i;
    long long ans;
    ans=1;
    if(N<=1000&&N>=0)
    {
        for(i=1;i<=N;i++)
        {
            ans=ans*i;
        }
        printf("%lld",ans);
    }
    else
    {
        printf("Invalid input");

    }
return;
}