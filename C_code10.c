#include <stdio.h>

void main() 
{
    int mat[4][4];
    int i,j,sum=0,sumd1=0,sumd2=0;
    
    printf("Enter the elements of a 4x4 matix: \n");
    for( i = 0; i < 4; i++) 
    {
        for(j=0;j<4;j++)
        {
           scanf("%d", &mat[i][j]);
        }
    }
    
    for( i = 0; i < 4; i++) 
    {
        for(j=0;j<4;j++)
        {
           sum += mat[i][j];
        }
    }
    
    for( i = 0; i < 4; i++) 
    {
        sumd1+= mat[i][i];
        sumd2+=mat[i][3-i];
    }
    
    printf("the given matrix:\n");
    for( i = 0; i < 4; i++) 
    {
        for(j=0;j<4;j++)
        {
           printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("the sum of elements of the matrix=%d\nthe sum of the elements of first diagonal=%d\n the sum of elements of the second diagonal=%d ",sum,sumd1,sumd2);
   
}
