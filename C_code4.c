#include<stdio.h>
void main()
{
    int s,k;
    char S[100];
    printf("inpur a string:");
    gets(S);
    while(S[s]!='\0')
    {
        if(S[s]=='a'||S[s]=='A'||S[s]=='e'||S[s]=='E'||S[s]=='i'||S[s]=='I'||S[s]=='o'||S[s]=='O'||S[s]=='u'||S[s]=='U')
        {
            k++;
        }
        s++;
    }
    printf("no. of vowels=%d",k);
}
