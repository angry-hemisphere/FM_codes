#include <stdio.h>

void main() {
    int size;
   
    printf("Enter the size of the array: ");
    scanf("%d", &size);
     int array[size];
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < size; i++) 
    {
        scanf("%d", &array[i]);
    }
    printf("The size of the array is: %d\n", sizeof(array)/sizeof(array[0]));
}
