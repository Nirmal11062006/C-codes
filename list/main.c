/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*head=NULL;
void addbegin(int data)
{
    struct Node*nn=malloc(sizeof(struct Node));
    nn->data=data;
    nn->next=head;
    head=nn;
}

void display()
{
    struct Node*temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void addend(int data)
{
    struct Node*nn=malloc(sizeof(struct Node));
    struct Node*temp=head;
    nn->data=data;
    nn->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=nn;
    
}

int main()
{
    int a,b;
    addbegin(1);
    addbegin(2);
    addbegin(3);
    addend(0);
    display();
    

    return 0;
}