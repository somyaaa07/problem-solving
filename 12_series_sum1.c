#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter no upto which you have to find the sum:\n");
    scanf("%d",&n);     //upto 99
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("%d",sum);
 return 0;
}
//1+3+5+7+......+99