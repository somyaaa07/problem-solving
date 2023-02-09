#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {

            printf("*");
        }
        printf("\n");
    }
    for(i=2;i>=1;i--)//for(i=1;i<=2;i++)
    {
        for(j=2;j>=i;j--)//for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)//for(j=1;j<=5-2*i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
 return 0;
}