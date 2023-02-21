#include<stdio.h>
#include<stdlib.h>

typedef struct poly{
 int coef;
 int exp;
 struct poly *next;
}poly;

struct poly *temp;

poly *insert(poly *p,int c,int e)
{
    temp=(poly*)malloc(sizeof(poly));
    poly *dummy=(poly*)malloc(sizeof(poly));
    temp->coef=c;
    temp->exp=e;
    poly *current=dummy;
    dummy->next=p;
    while(current->next!=NULL && current->next->exp>e)
      current=current->next;
    temp->next=current->next;
    current->next=temp;
    p=dummy->next;
    dummy->next=NULL;
    free(dummy);
    temp=NULL;
    current=NULL;
    return p;
}

poly *addpoly(poly *p1,poly *p2,poly *p3)
{
  p3=NULL; int c,e;
  while(p1!=NULL && p2!=NULL)
  {
    if(p1->exp==p2->exp)
    {
        c=p1->coef+p2->coef;
        e=p1->exp;
        p1=p1->next;
        p2=p2->next;   
    }
    else if(p1->exp>p2->exp)
    {
        c=p1->coef;
        e=p1->exp;
        p1=p1->next;

    }
    else{
        c=p2->coef;
        e=p2->exp;
        p2=p2->next;
    }
    if (c!=0)
    {
       p3=insert(p3,c,e);
    }
    
  }
  while(p1!=NULL){
    p3=insert(p3,p1->coef,p1->exp);
  }
  while (p2!=NULL)
  {
    p3=insert(p3,p2->coef,p2->exp);
  }
  return p3;
}

