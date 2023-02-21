#include<stdio.h>
#include<stdlib.h>
 int  partition(int arr[],int p,int r)
 {
    int q=p;
    int t=arr[p];
    for(int i=p+1;i<r;i++)
    {
        if(arr[i]<t)
        {
            arr[q++]=arr[i];
            arr[i]=arr[q];
        }
        arr[q]=t;
    }

    return q;
 }
void qs(int arr[],int p, int r)
{
  if(p<r){

    int q=partition(arr,p,r);
    qs(arr,p,q-1);
    qs(arr,q+1,r);
  }

}
 void print(int arr[],int n)
 {
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
 }

void main()
{
    int arr[]={5,7,2,1,8,3,9};
    qs(arr,0,7);
    print(arr,7);

}
