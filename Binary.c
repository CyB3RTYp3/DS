#include<stdio.h>
int Binary(int arr[],int l,int r,int x)
{
 int m;
  while(l<=r){
    m=l+r;
    if(arr[m]==x)
     return m+1;
    else if(arr[m]>x)
    r=m-1;
    else
    l=m+1;
  }
  return -1;
}
void main()
{
    int arr[]={1,2,3,5,6,7,8,9,22};
    int lar= Binary(arr,0,8,7);
    if(lar!=-1)
      printf("%d",lar);
}