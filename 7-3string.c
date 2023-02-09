// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// int str_rev(char str[])
// {
//     int i,l=0;
//     for(i=0;str[i]!='\0';i++)
//     {
//         l+=1;
//     }
//     int temp,k=0;
//     int s=0;
//     int la=l-1;
//     for(i=0;i<l/2;i++)
//     {
//         if(str[s]==str[la])
//         {
//             k+=1;
//         }
//         s++;
//         la--;
//     }
//     if(k==l/2)
//     {
//         printf("Palindrome String");
//     }
//     else{
//         printf("Not a Palindrome String");
//     }
// }
// int main()
// {
//     char str[100],l;
//     printf("enter string:");
//     scanf("%s",str);
//     str_rev(str);
//     return 0;
// }





// #include<stdio.h>
// #include<string.h>
// void pallindrome(char s[]){
//     int n=strlen(s);
//     for(int i=0;i<(n)/2;i++){
//         if(s[i]!=s[n-i-1]){
//             printf("String is not pallindrome\n");
//             return;
//         }
//     }
//     printf("String is pallindrome\n");
// }
// void main(){
//     char s[20];
//     printf("Input String\n");
//     scanf("%s",&s);
//     pallindrome(s);
// }
