#include <stdio.h>

void bubbleSort(int arr[], int n); //function declaration 
void main() 
{
    int i,n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) 
    {
       scanf("%d", &arr[i]);
    }
   printf("Original array: \n");
    for (int i=0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    bubble(arr, n); // function call 

    printf("\nSorted array: \n"); // Array printed after sorting 
    for (int i=0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}

void bubble(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n-1; i++) //loop for passes
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
}
