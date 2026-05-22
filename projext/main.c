#include<ctype.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char data;
    struct node*next;
    
};
struct node*top=NULL;
void push(int data){
    struct node*nn=malloc(sizeof(struct node));
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
int pop(){
    struct node*temp=top;
    int val=temp->data;
    top=top->next;
    return val;
}
void peek()
{
    printf("\n%d ",top->data);
}


int main()
{
    int op1,op2,op3;
    char b[50];
    scanf("%s",b);
    int y=strlen(b);
    for(int i=0;i<y;i++)//b[i]!='/0'
    {
        if(isdigit(b[i]))
        {
        push(b[i]-'0');
        }
        else
        {
            op1=pop();
            op2=pop();
            switch(b[i])
            {
            case '+':op3=op1+op2;
            push(op3);
            break;
            case '-':op3=op1-op2;
            push(op3);
            break;
            case '*':op3=op1*op2;
            push(op3);
            break;
            case '/':op3=op1/op2;
            push(op3);
            break;
            }
            
        }
    }
    peek();
    printf("\n");
    display();

    return 0;
}