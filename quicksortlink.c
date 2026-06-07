#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*prev;
	struct node*next;
};
struct node*head=NULL;
struct node*tail=NULL;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
struct node *partition(struct node*low,struct node*high)
{
	int pivot =high->data;
	struct node*i=low->prev;
	struct node*j;
	for(struct node*j=low;j!=high;j=j->next)
	{
		if(j->data<pivot)
		{
			if(i == NULL)
       			{
       				 i = low;
  			}  
    			else
    			{
        			i = i->next;
			}
			swap(&i->data,&j->data);
		}
	}
	if(i == NULL)
       	{
       		i = low;
  	}  
  	else
    	{
        	i = i->next;
	}
	swap(&i->data,&high->data);
	return i;
}

void add(int a)
{
	struct node*nn=malloc(sizeof(struct node));
	nn->data=a;
	nn->prev=NULL;
	nn->next=NULL;
	if(head==NULL)
	{
		head=tail=nn;
	}
	else
	{
		tail->next=nn;
		nn->prev=tail;
		tail=nn;
	}
}
void display()
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void quicksort(struct node*low,struct node*high)
{
	if(high!=NULL && high!=low && high->next!=low)
	{
		struct node *pi=partition(low,high);
		quicksort(low,pi->prev);
		quicksort(pi->next,high);
	}
}		
int main()
{
	add(30);
	add(40);
	add(50);
	add(10);
	add(5);
	add(90);
	printf("before sorting\n");
	display();
	quicksort(head,tail);
	printf("after sorting\n");
	display();
	return 0;
}
