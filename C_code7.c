#include<stdio.h>
void main()
{
    char S[100];
    int len,i,flag=0;
    printf("enter a word:"); // user input string
    gets(S);
    len = strlen(S);   // number of charecters in a string 
    for(i=0;i<=len/2;i++) // loop till half of the string 
    {
        if(S[i]!=S[len-i-1]) // to compare if corresponding charecters are same 
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
