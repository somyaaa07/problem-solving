#include<stdio.h>
#include<math.h>
int main()
{
    float i,c,d,e;
    double sum=0;
    for(i=1;i<=10;i++)
    {
       c=pow(10,i);
       d=(9*c);
       e=(c-1)/d;
       sum=sum + 3*e;
    printf("%lf\n",sum);
    }
 return 0;
}

//.3+.33+.333+.......+.3333333333