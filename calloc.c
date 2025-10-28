#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int sum = 0;
    
    // Read the size of the array
    scanf("%d", &size);
    
    // TODO: Write your code below
    // Use calloc() to allocate memory for the array
    // Check if allocation was successful
    // Print initial values (should be zero)
    // Read and store the input values
    // Print updated values
    // Calculate and print the sum
    // Free the allocated memory
    int *arr = (int*)calloc(size, sizeof(int));
    if (arr == NULL){
        printf("Memory allocation failed!");
        return -1;
    }

    printf("Memory allocated and initialized to zero!\n");
    printf("Initial values:");
    for (int i = 0; i < size; i++){
        printf(" %d", arr[i]);
        
    }
    printf("\nUpdated values:");
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        printf(" %d", arr[i]);
        sum += arr[i];
    }
    printf("\nSum: %d\n", sum);
    free(arr);
    printf("Memory freed!");
    
    return 0;
}