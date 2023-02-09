#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,i,x,j,s=1;
    scanf("%d%d",&n,&x);
   for(i=1;i<=n;i++)
   {
    j=pow(x,i);
    s=s+j/i;
   }
   printf("%d",s);

 return 0;
}