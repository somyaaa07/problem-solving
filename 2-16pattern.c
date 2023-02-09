#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int i,j,start,end,l;
    l=2*n-1;
    start=0;
    end=l-1;
    int a[l][l];
    while(n!=0)
    {
        for(i=start;i<=end;i++)
        {
            for(j=start;j<=end;j++)
            {
                if(i==start||i==end||j==start||j==end)
                {
                    a[i][j]=n;
                }
            }
        }
        start++;
        end--;
        n--;
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
