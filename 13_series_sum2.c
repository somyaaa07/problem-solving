#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,n,sum=0;
    printf("enter values of x and n:\n");
    scanf("%d%d",&x,&n);
    for(i=0;i<=n;i++)
    {
        int c=1;
        c=pow(x,i);
        sum = sum+c;
    }
    printf("%d",sum);
 return 0;
}

//1+x+x2+x3+......+x10