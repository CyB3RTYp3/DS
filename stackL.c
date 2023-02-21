#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int data;
    struct stack *next;
}stack;

stack *top=NULL;

void push(int x)
{
    stack *temp=(stack*)malloc(sizeof(stack));
    temp->data=x;
    temp->next=top;
    top=temp;
}

int pop()
{
  if(top==NULL)
  {
    return -1;
  }
  stack *temp=top;
  int x=temp->data;
  top=temp->next;
  temp->next=NULL;
  free(temp);
  return x;
}

void main(){
    push(4);
    push(3);
    push(2);
    int x=pop();
    int y=pop();
    int z=pop();
    int c=pop();
    printf("%d %d %d %d ",x,y,z,c);
}