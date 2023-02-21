#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;

} node;
node *temp;

node *insertf(node *h,int x){
    temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=h;
    h=temp;
    return h;
}

node *insertl(node *h,int x){
    temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    if (h==NULL){
      h=temp;
    }
    else{
    node *current=h;
    while(current->next!=NULL)
     current=current->next;
    current->next=temp;
    }
     return h;
}

node *delete(node *h,int x){
    if(h==NULL)
     return NULL;
     node *current=h;
    if(h->data==x)
    {  
         h=h->next;
         current->next=NULL;
         free(current);
         return h; 
    }
    else{
       while(current->next!=NULL && current->next->data!=x)
       {
        current=current->next;
       }
       if(current->next!=NULL){
        node *todelete=current->next;
        current->next=todelete->next;
        todelete->next=NULL;
        free(todelete);
       }
       current=NULL;
       return h;
    }
}

void print(node *h){
    node *current=h;
    while( current!=NULL)
    {
       printf("%d",current->data);
       current=current->next;
    }
}
void main()
{
    node *h=NULL;
    h=insertf(h,5);
    h=insertf(h,6);
    h=insertl(h,7);
    h=insertl(h,3);
    h=delete(h,5);
    print(h);
}