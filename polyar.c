#include<stdio.h>
#include<stdlib.h>
void createp(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

int max(int a,int b)
{
    if(a>b)
     return a;
    return b;
}

int min(int a,int b)
{
    if(a<b)
     return a;
    return b;
}
void viewpolynomial(int P[],int n)
{ 
 int i;
 for(int i=n;i>=0;i--)
   {
      printf("%dx^%d",P[i],i);
     if (i!=0)
      printf("+ ");
     else
      printf("\n");
   }
 }

void addpoly(int P1[],int n1,int P2[],int n2,int P[])
{
    int sn=min(n1,n2);
    int i=0;
    for(i=0;i<=sn;i++)
 P[i]=P1[i]+P2[i];
 for(i=sn+1;i<=n1;i++)
 
 P[i]=P1[i];
 for(i=sn+1;i<=n2;i++)
 P[i]=P2[i];

    viewpolynomial(P,max(n1,n2)); 
    return;   
}
void main()
{
     int i,j,P1[5],P2[5],P[5],n1,n2;
      printf("Enter the degree of the first polynomial\n");
     scanf("%d",&n1);
printf("Enter the terms in the order of their decreasing degree\n");
for(i=n1;i>=0;i--)
   scanf("%d",&P1[i]);
printf("\n\n"); 
printf("\nEnter the degree of the second polynomial\n");
    scanf("%d",&n2);
printf("Enter the terms in the order of their decreasing degree\n");
     for(j=n2;j>=0;j--)
     scanf("%d",&P2[j]);
 printf("\n"); 
 viewpolynomial(P1,n1);
 viewpolynomial(P2,n2);
  printf("\nResultant polynomial is: \n"); 
  addpoly(P1,n1,P2,n2,P);
}


