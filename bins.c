#include<stdio.h>
int main()
{
    int i,n,key,a[10],mid,high,low=0,found=0;
    printf("enter the number of array elements\n");
    scanf("%d",&n);
    printf("enter the value of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key to be searched\n");
    scanf("%d",&key);
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
         {
            found=1;
            break;
          }
         else if(key>a[mid])
           low=mid+1;
         else
           high=mid-1;
     }
     if(found==1)
         printf("item found in position %d",mid+1);
      else
        printf("item not found\n");
 }
