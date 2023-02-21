#include<stdio.h>
void selection(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int k=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[k])
             {
               k=j;
             }
        }
        swap(arr,i,k);

    }
}

void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
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
    selection(arr,7);
    print(arr,7);

}

