#include<stdio.h>
#include<math.h>
#define aa pow(10,-6)
int jiech(int num)
{
    int ans;
    if(num==1||num==0)
    ans=1;
    else
    ans=num*jiech(num-1);
    return ans;

}

int main()
{

    int i;
    float x;
    double jdz,cosx;
    jdz=i=cosx=1;
    printf("求cosx,请输入x的值:\n");
    scanf("%f",&x);
    while(jdz>=aa)
    {
           
        jdz=(pow(x,2*i)/jiech(2*i));
        cosx+=pow(-1,i)*jdz;    
        i++;
    }
    printf("cosx=%lf\n",cosx);
   return 0;
    


}
