#include<stdio.h>
#include<stdlib.h>

typedef struct linklist
{
	int data;
	struct linklist* next;
}*pointer;

void Attach(int c,pointer *pRear)
{
    pointer P;
    P=(pointer)malloc(sizeof(struct linklist));
    P->data=c;
    P->next=NULL;
    (*pRear)->next=P;
    *pRear=P;
}

void quchong(int n,pointer P)
{
    pointer Rear=P,t;
    while (Rear->next&&Rear->next->data>n)
    {
       Rear=Rear->next;
    }
    if(Rear->next&&Rear->next->data==n);
    else{
        t=(pointer)malloc(sizeof(struct linklist));
        t->data=n;
        t->next=Rear->next;
        Rear->next=t;
        Rear=Rear->next;
    }
}

pointer ReadSet()
{
    pointer P,Rear,t;
    int c,N;
    printf("输入集合元素的个数\n");
    scanf("%d",&N);
    P=(pointer)malloc(sizeof(struct linklist));
    P->next=NULL;
    Rear=P;
    printf("输入元素\n");
    scanf("%d",&c);
    Attach(c,&Rear);
    N-=1;
    while (N--)
    {
        scanf("%d",&c);
        quchong(c,P);
    }
    t=P;P=P->next;free(t);
    return P;
}
 
void out_put(pointer head)
{
	pointer temp=head;
	while(temp)
	{
		printf("%d\t",temp->data);
		temp = temp->next;
	}
    printf("\n");
}

void function(pointer P1,pointer P2,pointer P3,pointer Set1,pointer Set2)
{
    int c;
    pointer Rear1,Rear2,Rear3,rear;
    pointer t,t1,t2;
    pointer p;
    Rear1=P1;   Rear2=P2;   Rear3=P3;
    t1=Set1;    t2=Set2;
    while (t1)
    {
        c=t1->data;
        Attach(c,&Rear1);
        Attach(c,&Rear3);
        t1=t1->next;
    }
    while (t2)
    {
        c=t2->data;
        Rear1=P1;    
        while (Rear1->next&&Rear1->next->data>c)
        {
            Rear1=Rear1->next;
        }
        if(Rear1->next&&Rear1->next->data==c)
        {
            Attach(c,&Rear2); 
            rear=P3;
            while (rear->next)
            {
                if(rear->next->data==c)
                {
                    p=rear->next;
                    rear->next=rear->next->next;
                    free(p);
                }
                else
                rear=rear->next;/* code */
            }
        }
        else
        {
            t=(pointer)malloc(sizeof(struct linklist));
            t->data=c;
            t->next=Rear1->next;
            Rear1->next=t;
            Rear1=Rear1->next;
        }
        t2=t2->next;
    }
       
}


int main()
{    
    pointer P1,P2,P3;
    pointer Set1,Set2;
    pointer p1,p2,p3;
    Set1=ReadSet();    out_put(Set1);
    Set2=ReadSet();    out_put(Set2);
    
    P1=(pointer)malloc(sizeof(struct linklist));
    P1->next=NULL;
    
    P2=(pointer)malloc(sizeof(struct linklist));
    P2->next=NULL;
    
    P3=(pointer)malloc(sizeof(struct linklist));
    P3->next=NULL;
    
    function(P1,P2,P3,Set1,Set2);
    p1=P1;P1=P1->next;free(p1);
    p2=P2;P2=P2->next;free(p2);    
    p3=P3;P3=P3->next;free(p3);
    
    printf("并集为\n");     out_put(P1);
    printf("交集为\n");     out_put(P2);
    printf("差集为\n");     out_put(P3);

    return 0;
}