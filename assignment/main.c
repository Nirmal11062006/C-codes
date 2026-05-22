#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head=NULL;
void add_at_begin()
{
	struct node* nn=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(head==NULL)
	{
		head=nn;
	}
	else
	{
		nn->next=head;
		head=nn;
	}
}
void add_at_end() 
{
	struct node* nn=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(head==NULL)
	{
		head=nn;
	}
	else
	{
		struct node* temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		
		}
		temp->next=nn;
	}
}
void add_at_any_pos(int position)
{
	if(position<1)
	{
		printf("invalid position\n");
		return;
	}
	if(position==1)
	{
		add_at_begin();
		return;
	}
	int i=0;
	struct node* nn=(struct node*)malloc(sizeof(struct node));
	struct node*temp=head;
	printf("enter the data:");
	scanf("%d",&nn->data);
	while(i<position-1&&temp!=NULL)
	{
		temp=temp->next;
		i++;
	}
	if(temp==NULL)
	{
		printf("invalid position");
		free(nn);
	}
	else
	{
		nn->next=temp->next;
		temp->next=nn;
	}
}
int count()
{
	struct node*temp=head;
	int c=0;
	while(temp->next!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
void add_on_mid()
{
	int mid=(count()/2)+1;
	add_at_any_pos(mid);
	return;
}
void delete_at_begin()
{
	struct node*temp=head;
	if(head==NULL)
	{
		printf("LIST IS EMPTY");
	}
	else if(head->next==NULL)
	{
		head=NULL;
	}
	else
	{
		head=head->next;
		free(temp);
	}
}
void delete_at_end()
{
	struct node*temp,*prev;
	if(head==NULL)
	{
		printf("LIST IS EMPTY");
	}
	else if(head->next==NULL)
	{
		head=NULL;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		free(temp);
	}
}
void delete_at_any_pos(int position)
{
	struct node*temp;
	struct node*prev;
	if(position<1)
	{
		printf("Invalid input\n");
	}
	if(position==1)
	{
		delete_at_begin();
	}
	temp=head;
	int i=0;
	while(i<position-1&&temp!=NULL)
	{
		prev=temp;
		temp=temp->next;
		i++;
	}
	if(temp==NULL)
	{
		printf("INVALId POSITION\n");
	}
	else
	{
		prev->next=temp->next;
		free(temp);
	}
}
void delete_at_mid()
{
	int mid;
	mid=(count()/2)+1;
	delete_at_any_pos(mid);
}
int main()
{
    char name[50];
    printf("enter the name");
    scanf("%s",name);
}
