#include<stdio.h>
#include<stdlib.h>
int push(int arr[],int top,int x,int n)
{
    if(top<n)
    {
        arr[++top]=x;
        return top;
    }
    return -1;
}
 int pop(int arr[],int top,int n){
    if(top>-1)
    {
        printf("%d",arr[top--]);
        return top;
    }
    return -1;
 }

void main(){
    int arr[5]; int top=0;
    top=push(arr,0,4,5);
    top=push(arr,0,3,5);
    top=push(arr,0,6,5);
    top=push(arr,0,1,5);
    top=push(arr,0,2,5);
    top=pop(arr,top,5);
    top=pop(arr,top,5);


}