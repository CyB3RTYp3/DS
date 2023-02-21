#include<stdio.h>
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
 void bubble(int arr[],int n)
 {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
          if(arr[j]>arr[j+1])
           swap(arr,j,j+1);
        }
    }
 }
  void main()
{
    int arr[]={5,7,2,1,8,3,9};
    bubble(arr,7);
    print(arr,7);

}