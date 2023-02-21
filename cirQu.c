#include<stdio.h>
#include<stdlib.h>
typedef struct  queue
{
  int size;
  int head;
  int tail;
  int *a;
}queue;

void create(queue *q,int n)
{
    q->head=q->tail=0;
    q->size=n ;
    q->a=(int*)malloc((q->size)*sizeof(int));
}
 
int isFull(queue*q)
{
    if(q->tail%q->size==q->head-1)
     return 1;
    return 0;
}

void enque(queue *q,int x)
{ 
   if(isFull(q)!=1){
    q->tail=q->tail%q->size+1;
    q->a[q->tail]=x;
    if(q->head==0)
     q->head=1;
   }
   else{
    printf("array is full");
   }
}

int deque(queue *q)
{
    if(q->head!=0){
        int x=q->a[q->head];
         if(q->head!=q->tail)
         {
            q->head=q->head%q->size+1;
         }
        else{
         q->head=q->tail=0;
        }
        return x;
    }
    return -1;
}

int main()
{
     queue q;
      int choice, element;
      create (&q, 5);
      do
      {
        printf("\n-----Menu-----");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display Queue\n4.Exit");
        printf("\nEnter your choice:");
        scanf ("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter the element to be Enqueued:");
                    scanf("%d",&element);
                    enque(&q,element);
                    break;
            case 2: printf("\nThe Dequeued Element is %d",deque(&q));
                    break;
            case 4: break;
            default: printf("\nInvalid Choice");
        }
    }
    while(choice!=4);
    return 1;
}