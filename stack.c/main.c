
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    
};
struct node*top=NULL;
void push(int data){
    struct node*nn=(struct node*)malloc(sizeof(nn));
    nn->data=data;
    nn->next=top;
    top=nn;
}
void display(){
     struct node*temp=top;
     while(temp!=NULL)
     {
         printf("%d ",temp->data);
         temp=temp->next;
         
     }
}
void pop(){
    top=top->next;
}
void peek()
{
    printf("\n%d",top->data);
}
isdigit

int main()
{
    int n,data;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&data);
        push(data);
    }
    pop();
    display();

    return 0;
}