#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,n,l,u;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    l=0;
    u=n-1;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            a[u]=i;
            u--;
        }
        else
        {
            a[l]=i;
            l++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
 return 0;
}