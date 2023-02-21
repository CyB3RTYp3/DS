#include <stdio.h>
#include <stdlib.h>

struct BST
{
    int data;
    struct  BST* left;
    struct  BST* right;   
};

struct BST *new_node(int x) //new_node
{
  struct BST *temp;
  temp=(struct BST*)malloc(sizeof(struct BST));
  temp->right=NULL;
  temp->left=NULL;
  temp->data=x;
  return temp;
}

struct BST* insert(struct BST *root, int x )
{
    if(root==NULL)
     return new_node(x);
    else if(x>root->data)
      root->right=insert(root->right,x);
    else
      root->left=insert(root->left,x);
   return root;
}

struct BST* min(struct BST* root)
{
    if(root==NULL)
      return root;
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

// struct BST* max(struct BST* root)
// {
//     if(root==NULL)
//       return root;
//     while(root->right!=NULL)
//     {
//         root=root->right;
//     }
//     return root;
// }

struct BST *delete(struct BST *root,int x)
{
    if(root==NULL)
     return root;
    if(x>root->data)
      root->right=delete(root->right,x);
    else if(x<root->data)
      root->left=delete(root->left,x);
    else
       {
       
        if(root->left==NULL){
            
          struct BST* temp=root->right;
          free(root);
         return temp;
            
        }
        else if(root->right==NULL){
            struct BST* temp=root->left;
            free(root);
            return temp;
        }
        
         struct BST* temp=min(root->right); //max(root->left)
        root->data=temp->data;

        root->right=delete(root->right,temp->data);        

       }
       return root;
    
}


void inorder(struct BST* root)
{   
    if(root!=NULL){
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    }
}

int main()
{
    struct BST *root=NULL;
    root=insert(root,3);
    root=insert(root,2);
    root=insert(root,5);
    root=insert(root,4);
    inorder(root);
    printf("\n");
    root=delete(root,3);
    inorder(root);
}
