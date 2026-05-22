#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node create(int value);
{
    struct node*nn=malloc(sizeof(struct node));
    nn->data=value;
    nn->left=NULL;
    nn->right=NULL;
    return nn;
    
}
sruct node*insert(struct node*root,int data)
{
    if(root==NULL)
    {
        return create(data);
    }
    if(data<root->data)
    {
        root->left=incert(root->left,value);
    }
    else
    {
        root->right=incert(root->right,value);
    }
    return root;
}
void inorder(struct node*root)
{
    inorder(root->left);
    printf("%d",root->data)
}
int main()
{
    struct node*root=NULL;
}