#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,i;
    float s=0,f=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        s=s+f/i;
    }
    printf("%.2f",s);
 return 0;
}