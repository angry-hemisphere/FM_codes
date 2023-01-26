#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the no. of rows for the pattern\n");  //user input for rows of pattern
    scanf("%d",&n);
    for(i=1;i<=n;i++)                                  // loop for printing the pattern
    {
        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
