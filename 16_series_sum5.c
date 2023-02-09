#include<stdio.h>
int main()
{
    int i,sum=0,x;
    scanf("%d",&x);
    for(i=1;i<=10;i++)
    {
        sum=sum+x;
        x=x/2;
    }
    printf("%d",sum);
 return 0;
}

//10000+5000+2500+1250+...+10th term