#include <stdio.h>

void main() 
{
    int k,n,i,j,temp,minIndex;
    char op;
    
    printf("\nenter b for bubble sort and s for selection sort :\n"); //User input for type of sorting
    scanf("%c", &op);
    
    printf("Enter the size of the array:\n");  //user input array size
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");  //user input for elements of the array
    for (k = 0; k < n; k++) 
    {
       scanf("%d", &arr[k]);
    }
   printf("Original array: \n");    //input array printed
    for (int k=0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }

    if(op=='b')                             //Bubble Sort
    {
       for (i = 0; i < n-1; i++) 
      {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1]) 
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
      }
    

    printf("\nSorted array(bubble sort): \n");
    for (int k=0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    }
    
    if(op=='s')                               //Selection Sort
    {
    for (i = 0; i < n-1; i++) 
    {
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
     printf("\nSorted array(selection sort): \n");
    for (int k=0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    }
    
    else                                 //for command other that s or b
    {
        printf("\ninvalid command");
    }

}
