#include <stdio.h>

int main() {
    int size;
    int array[size];
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < size; i++) 
    {
        scanf("%d", &array[i]);
    }
    printf("The size of the array is: %d\n", size);
}
