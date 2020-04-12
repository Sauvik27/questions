//Binary search tree implementation using recursion.
#include <stdio.h>
#include <stdlib.h>
typedef struct bstnode
{
	int data;
	bstnode *left;
	bstnode *right;
}bstnode;
struct bstnode* GetNewNode(int data)
{
	struct bstnode *newNode=(struct bstnode*)malloc(sizeof(bstnode));
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
struct bstnode* insert(bstnode *root,int data)
{
	if(root==NULL)
	{
		root=GetNewNode(data);
	}
	else if(data<=root->data)
	{
		root->left=insert(root->left,data);
	}
	else
	{
		root->right=insert(root->right,data);
	}
	return root;
}
bool search(bstnode *root,int data)
{
	if(root==NULL)
	{
		return false;
	}
	else if(root->data==data)
	{
        return true;
	}
	else if(data>=root->data)
	{
		return search(root->right,data);
	}
	else
	{
		return search(root->left,data);
	}
}
int main()
{
	struct bstnode *root=NULL;
	int num;
	root=insert(root,15);
	root=insert(root,20);
	root=insert(root,10);
	root=insert(root,8);
	root=insert(root,12);
	root=insert(root,17);
	root=insert(root,25);
	//searching
	printf("enter the number\n");
	scanf("%d",&num);
    if(search(root,num)==true)
    	printf("found\n");
    else
    	printf("not found\n");
    return 0;
}