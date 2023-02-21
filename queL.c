#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next; 
}node;

node *head=NULL;
node *tail=NULL;
node *temp=NULL;

void enq(int x){
    temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    if(head==NULL){
        head=tail=temp;
    }
    else{
        tail->next=temp;
        tail=tail->next;
    }
    temp=NULL;

}

int deq(){
    if(head!=NULL){
        int x;
        temp=head;
        x=temp->data;
        if(head==tail){
            head=tail=NULL;
        }
        else{
            head=head->next;
        }
        free(temp);
        temp=NULL;
    }
}

void print()
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d", current->data);
        current = current->next;
    }
    printf("\n");
}

void main(){

    enq(3);
    enq(4);
    enq(5);
    print();
    deq();
    print();
}