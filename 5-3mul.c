#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,i,l,u,mid,s1=0,s2=0;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=0;
    u=n-1;
    mid=(l+u)/2;
    for(int j=0;j<=mid;j++)
    {
        s1+=a[j];
    }
    printf("sum of 1 array:%d\n",s1);
    for(int j=mid+1;j<n;j++)
    {
        s2+=a[j];
    }
    
    printf("sum of 2 array:%d\n",s2);
    int mul=s1*s2;
    printf("product of s1 and s2:%d",mul);
 return 0;
}