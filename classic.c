#include<stdio.h>
#include<stdlib.h>


typedef struct linklist
{
	int data;
	struct linklist* next;
}*pointer;


void initial(pointer head)
{
    head->data = 0;
	head->next = NULL;
}

void add_element(pointer head, int N)
{
	pointer p;
	p = (pointer)malloc(sizeof(struct linklist));
	p->data = N;
	p->next = head->next;
	head->next = p;
}

void out_put(pointer head)
{
	pointer temp=head->next;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}

int main()
{
	pointer head;
	head = (pointer)malloc(sizeof(struct linklist));
	initial(head);
	add_element(head, 5);
	add_element(head, 10);
	out_put(head);
	return 0;
}