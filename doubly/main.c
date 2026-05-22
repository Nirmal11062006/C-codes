#include <stdio.h>
#include<stdlib.h>
struct node {
	char data;
	struct node*prev;
	struct node*next;
};
struct node*head=NULL;
struct node*tail=NULL;
void incert(char d)
{
	struct node*nn=malloc(sizeof(struct node));//(struct node*)malloc(sizeof(nn));
	nn->data=d;
	nn->next=NULL;
	nn->prev=NULL;
	if(head==NULL)
	{
		head=nn;
		tail=nn;
	}
	else
	{
		nn->next=head;
		head->prev=nn;
		head=nn;
	}
}
void incertend(char d)
{
	struct node*nn=malloc(sizeof(struct node));//(struct node*)malloc(sizeof(nn));
	nn->data=d;
	nn->next=NULL;
	nn->prev=NULL;
	if(head==NULL)
	{
		head=nn;
		tail=nn;
	}
	else
	{
		nn->prev=tail;
		tail->next=nn;
		tail=nn;
	}

}
void display()
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("%c->",temp->data);
		temp=temp->next;

	}
	printf("NULL\n");
}
void reversedisplay()
{
	struct node*temp=tail;
	while(temp!=NULL)
	{
		printf("%c->",temp->data);
		temp=temp->prev;

	}
	printf("NULL");
}
void delete()
{
	if(head==NULL)
	{
		printf("LIST EMPTY");
	}
	else
	{
		struct node*temp=head;
		if(head->next==NULL)
		{
			head=NULL;
			tail=NULL;
		}
		else
		{
			head=head->next;
			head->prev=NULL;
		}
		free(temp);
	}
}
void deleteend()
{
	if(head==NULL)
	{
		printf("LIST EMPTY");
	}
	else
	{
		struct node*temp=tail;
		if(head->next==NULL)
		{
			head=NULL;
			tail=NULL;
		}
		else
		{
			tail=tail->prev;
			tail->next=NULL;
		}
		free(temp);

	}
}
int count()
{
	struct node*temp=head;
	int c=0;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
void insertpos(int pos,char d)
{
	int c=count();
	if(pos<1||pos>c+1)
	{
		printf("position not available");
		return;
	}
	if(pos==1)
	{
		incert(d);
		return;
	}
	else if(pos==c+1)
	{
		incertend(d);
		return;
	}
	if(pos>1&&pos<=c)
	{
		struct node*temp=head;
		struct node*nn=malloc(sizeof(struct node));//(struct node*)malloc(sizeof(nn));
		nn->data=d;
		nn->next=NULL;
		nn->prev=NULL;
		int b=0;
		while(pos-2!=b)
		{
			b++;
			temp=temp->next;
		}
		nn->next=temp->next;
		temp->next->prev=nn;
		nn->prev=temp;
		temp->next=nn;

	}

}
void deleteanypos(int pos)
{
    int c=count();
	if(pos<1||pos>c)
	{
		printf("position not available");
		return;
	}
	if(pos==1)
	{
		delete();
		return;
	}
	else if(pos==c)
	{
		deleteend();
		return;
	}
	if(pos>1&&pos<=c)
	{
		struct node*temp=head;
		int b=0;
		while(pos-1!=b)
		{
			b++;
			temp=temp->next;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);

	}

    
}

int main()
{
	incert('m');
	incert('r');

	incert('i');
	incert('n');
	incertend('l');
	insertpos(5,'a');
	display();
	deleteend();
	delete();
	display();

	reversedisplay();

}