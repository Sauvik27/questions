//Binary search tree implementation using recursion.
#include <stdio.h>
#include <stdlib.h>
typedef struct bstnode
{
	int data;
	bstnode *left;
	bstnode *right;
}bstnode;
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
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
int minimum(bstnode *root)
{
	int min=0;
	struct bstnode *temp;
	temp=root;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
    min=temp->data;
    return min;
}
int Height(bstnode *root)
{
	if(root==NULL)
		return -1;
	return max(Height(root->left),Height(root->right))+1;
}
int main()
{
	int height=0;
	//implementation..................
	struct bstnode *root=NULL;
	int num=0;
	int max=0;
	int min=0;
	root=insert(root,15);
	root=insert(root,20);
	root=insert(root,10);
	root=insert(root,8);
	root=insert(root,12);
	root=insert(root,17);
	root=insert(root,25);
	//searching........................
	printf("enter the number\n");
	scanf("%d",&num);
    if(search(root,num)==true)
    	printf("found\n");
    else
    	printf("not found\n");
         //Maximum and minimum..............
    max=root->data;
    printf("Maximum is\n");
    printf("%d\n",max);
    min=minimum(root);
    printf("Minimum is\n");
    printf("%d\n",min);
        //Height of BST.....................
    height=Height(root);
    printf("Height is\n");
    printf("%d\n",height);
    return 0;
}
