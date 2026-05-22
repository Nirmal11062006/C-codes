#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head=NULL;//initialy head is null
void add_at_begin()
{
	struct node* nn=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&nn->data);
	nn->next=NULL;//INITIALLY THE NEW NODE NEXT IS NULL
	if(head==NULL)//check if there is existing node if no then the head
	{
		head=nn;
	}
	else
	{
		nn->next=head;//NEW NODE NEXT IS THE PREVIOUS HEAD
		head=nn;//if there is an existing head the new node next is the existing node head
	}
}
void add_at_end() 
{
	struct node* nn=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA");
	scanf("%d",&nn->data);
	nn->next=NULL;//INITIALL NEWNODE NEXT IS NULL
	if(head==NULL)//IF THERE IS NO NUMBER IN THE LIST NEW HEAD WILL BE HEAD
	{
		head=nn;
	}
	else
	{
		struct node* temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;/*when temp =NULL THE LOOP ENDS,IN LOOP TEMP =TEMP->NEXT =THE NEXT TEMP
			SO THE NEXT VALU IS THE NEXT TEMP*/
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
	/*if 2 condition and second is if position is not so itcan only
	traverse until its null above that we cant add it*/
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
		nn->next=temp->next;/*old temp oda next a eduthu nn oda next ku assign panrom*/
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
	//struct node*prev;
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
	while(i<position-1&&temp!=NULL)//i<position;
	{
		//prev=temp
		temp=temp->next;//prev=temp and by removing -1 in while and prev next=temp next
		i++;
	}
	if(temp==NULL)
	{
		printf("INVALId POSITION\n");
	}
	else
	{
		//prev->next=temp->next;
		//free(temp);
		struct node*delnode=temp->next;
		temp->next=delnode->next;
		free(delnode);
	}
}
void delete_at_mid()
{
	int mid;
	mid=(count()/2)+1;
	delete_at_any_pos(mid);
}
void display()
{
    struct node*temp=head;
    if(head==NULL)
    {
        printf("LIST IS EMPTY");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
    
}
int main()
{
     

	return 0;
}