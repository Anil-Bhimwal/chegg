#include<iostream>
#include<stdio.h>
using namespace std;
struct bstnode{
int data;
struct bstnode *left;
struct bstnode* right;
};
struct bstnode*insert(struct bstnode*root,int data)
{
    struct bstnode*par;
    struct bstnode*n=new struct bstnode();
    n->left=NULL;
    n->data=data;
    n->right=NULL;
    if(root==NULL)
        root=n;
    else {par=root;
    while(par!=NULL)
        if(par->data>data)
    {
        if(par->left=NULL)
            par->left=n;
        par=par->left;
    }else if (par->data<data)
    {
        if(par->right=NULL)
            par->right=n;
        par=par->right;

    }

    }
}
inorder(struct bstnode *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}
main()
{struct bstnode *root = NULL;

     root= insert(root, 50); inorder(root);
    root=insert(root, 30);
     inorder(root);
    root=insert(root, 20);
     inorder(root);
     root=insert(root, 40);
      inorder(root);
     root=insert(root, 70);
      inorder(root);
     root=insert(root, 60);
      inorder(root);
     root=insert(root, 80);
      inorder(root);

return 0;}
