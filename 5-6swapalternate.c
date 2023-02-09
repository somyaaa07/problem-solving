#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=0;
    int u=n-1;
    if(n%2==0)
    {
        for(i=0;i<n;i=i+2)
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    else
    {
        
        for(i=0;i<n-1;i=i+2)
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
 return 0;
}