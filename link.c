#include <stdio.h>
#include <stdlib.h>
typedef struct QNode
{
 int date;
 struct QNode *pNext;
}*pQNode;
typedef struct Queue
{
 pQNode front;
 pQNode rear;
}LinkQueue,*pLinkQueue;
pLinkQueue init_LinkQueue(pLinkQueue);
pLinkQueue en_LinkQueue(pLinkQueue,int);
pLinkQueue traverse_LinkQueue(pLinkQueue);
pLinkQueue is_empty(pLinkQueue);
pLinkQueue de_LinkQueue(pLinkQueue,int *);
pLinkQueue DestroyQueue(pLinkQueue);
int main()
{
 LinkQueue q;
 int val;
 init_LinkQueue(&q);
 en_LinkQueue(&q,3);
 en_LinkQueue(&q,2);
 en_LinkQueue(&q,1);
 de_LinkQueue(&q,&val);
 printf("delete is %d\n",val );
 traverse_LinkQueue(&q);

 return 0;
 }
pLinkQueue init_LinkQueue(pLinkQueue pQ)
{
pQ->front=pQ->rear=(pQNode)malloc(sizeof(QNode));//head node
  if(NULL==pQ->front)
    {
 exit(-1);
 return false;
   }
  else
    return true;
}

pLinkQueue en_LinkQueue(pLinkQueue pQ,int val)
{
 
  pQNode New;
  New=(pQNode)malloc(sizeof(QNode));
  if(NULL==New)
  {
   exit(-1);
   return false;
  }
  New->date=val;
  pQ->rear->pNext=New;
  pQ->rear=New;
  return true;

}
pLinkQueue is_empty(pLinkQueue pQ)
{
 if(pQ->front==pQ->rear)
  return true;
 else
  return false;
}
pLinkQueue traverse_LinkQueue(pLinkQueue pQ)
{
 if(is_empty(pQ))
 {
  printf("LinkQueue is empty \n");
  return false;
 }
 else
 {
  pQNode p=pQ->front;
  while(p!=pQ->rear)
  {
   printf("%d  ",p->pNext->date );
   p=p->pNext;
  }
 }
 return true;

}

pLinkQueue de_LinkQueue(pLinkQueue pQ,int * val)
{
 if(is_empty(pQ))
 {
  printf("pLinkQueue is empty");
  return false;
 }
 else
 {
  pQNode p=pQ->front->pNext;//delete postion
  *val=p->date;
  pQ->front->pNext=p->pNext;
  if(pQ->rear==p)
   pQ->rear=pQ->front;//finally element
  free(p);
  
  return true;
 }
}

pLinkQueue DestroyQueue(pLinkQueue pQ)
{
 while (pQ->front)
 {
  pQ->rear=pQ->front->pNext;
  free(pQ->front);
  pQ->front=pQ->rear;
 }
 return true;

}

