#include<stdio.h>
#include<stdlib.h>
void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void maxheapify(int arr[],int n,int k){
    int l=2*k;
    int r=2*k+1;
    int max=k;
    if(l<n && arr[l]>arr[max])
     max=l;
    if(r<n && arr[r]>arr[max])
     max=r;
    if(max!=k)
    {
        swap(arr,k,max);
        maxheapify(arr,n,max);
    }
}

void buildmaxheap(int arr[],int n)
{
    for(int i=n/2;i>=0;i--)
    {
        maxheapify(arr,n,i);

    }
}

void heapsort(int arr[],int n){
    buildmaxheap(arr,n);
    for (int i = n - 1; i >=0; i--) 
    {
    swap(arr,0,i);
    maxheapify(arr, i, 0);
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
    heapsort(arr,7);
    print(arr,7);

}