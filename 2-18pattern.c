// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char s[20];
//     scanf("%s",s);
//     int l=strlen(s);
//     for(int i=0;i<l;i++)
//     {
//         for(int j=i;j<l;j++)
//         {
//             printf("%c",s[j]);
//         }
//         printf("\n");
//         for(int k=0;k<i+1;k++)
//         {
//             if(i+1<l)
//             printf(".");
//         }
//     }
//  return 0;
// }


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int l,i;
    char s[200]="Geeks",*j;
    j=s;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        printf("%s\n",j);
        *(j+i)='.';
    }
 return 0;
}