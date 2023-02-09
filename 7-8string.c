#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void prefix(char str[])
{
    int i,j;
    int l=strlen(str);
    for(i=1;i<=l;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    prefix(str);
 return 0;
}