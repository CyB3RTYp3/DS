#include<stdio.h>
void insertion(int arr[],int n)
{  int i,j,x ;
    for( i=1;i<n;i++)
    {
         x=arr[i];
        for( j=i-1;j>=0;j--)
        {
            if(x<arr[j])
             arr[j+1]=arr[j];
            else
             break;
        }
        arr[j+1]=x;
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
    insertion(arr,7);
    print(arr,7);

}