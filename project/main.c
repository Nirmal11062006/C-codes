
#include <stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node*next;
};
struct node*top=NULL;
void push(char a){
    struct node*nn=malloc(sizeof(struct node));
    nn->data=a;
    nn->next=top;
    top=nn;
}
void pop()
{
    top=top->next;
}
int match(char open,char close)
{
    if(open=='{'&&close=='}'){
        return 0;
    }
    if(open=='('&&close==')')
    {
        return 0;
    }
    if(open=='['&&close==']')
    {
        return 0;
    }
}

int main()
{
    char a[50];
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='['||a[i]=='{'||a[i]=='(')
        {
            push(a[i]);}
        else{
            char topchar=pop();
            if(!match(topchar,ch))
            {
                printf("not valid");
                return 0;
                }}}
                if(top==NULL)
                {
                    printf("valid");
                }
                else{
                    printf("not valid");
                }
}
