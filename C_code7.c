#include<stdio.h>
void main()
{
    char S[100];
    int len,i,flag=0;
    printf("enter a word:");
    gets(S);
    len = strlen(S);
    for(i=0;i<=len/2;i++)
    {
        if(S[i]!=S[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("given word is not a palindrome");
    }
    else
    {
        printf("given word is a palindrome");
    }
}
