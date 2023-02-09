#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void chocolate(int a[],int n)
{
    int l,u;
    l=0;
    u=n-1;
    while(l!=u)
    {
        if(a[l]>a[u])
        l++;
        else
        u--;
    }
    printf("%d",a[u]);
}
int main()
{
    int i,n;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    chocolate(a,n);
 return 0;
}