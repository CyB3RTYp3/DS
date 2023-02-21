#include<stdio.h>
#include<stdlib.h>
int *merge(int a[],int m,int b[],int n)
{
   int i=1, j=1, k=1;
   int *c=malloc((m+n+1)*sizeof(int));
   while (i<=m && j<=n)
   if (a[i] < b[j])
     c[k++]=a[i++];
   else
     c[k++]=b[j++];
  while (i<=m)
     c[k++]=a[i++];
while (j<=n)
     c[k++]=b[j++];
return c;
}

int *mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
       return merge( mergesort(arr,l,m),m-l+1,mergesort(arr,m+1,r),r-m);
    }
    return arr+l-1;
}


void printarray(int a[], int l, int r)
{   int i;
    for (i=l; i<=r;i++)
    printf("%d ",a[i]);
    printf("\n");
}

void main ()
{     int n,i;
printf("Enter the limits\n");
scanf("%d",&n);
int a[n];
printf("Enter the array elements\n");
for (i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("Sorted array is : \n");
printarray(mergesort(a,1,n),1,n);
}
