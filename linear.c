#include<stdio.h>
int linear(int arr[],int n, int x)
{
    for(int i=0;i<n;i++)
      if(arr[i]==x){
        return i+1;
      }
    return -1;
}

void main()
{
    int arr[]={1,2,34,5,7,8,9,22};
    int lar= linear(arr,8,5);
    if(lar!=-1)
      printf("%d",lar);
}