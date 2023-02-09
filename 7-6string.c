#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int compare(char s1[],char s2[])
{
    int i,c1=0,c2=0;
    for(i=0;s1[i]!='\0';i++)
    {
        c1++;
    }
     for(i=0;s2[i]!='\0';i++)
    {
        c2++;
    }
    if(c1!=c2)
    {
        return 0;
    }
    else
    {
        for(i=0;s1[i]!='\0';i++)
        {
            if(s1[i]==s2[i])
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}
int main()
{
    char s1[100],s2[100];
    puts("enter first string: ");
    gets(s1);
    puts("enter second string: ");
    gets(s2);
    int c=compare(s1,s2);
    if(c)
    {
        printf("strings are same");
    }
    else{
        printf("strings are different");
    }
 return 0;
}