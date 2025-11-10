#include <stdio.h>
#include <stdlib.h>

int main() {
    // Read input
    int input_value;
    scanf("%d", &input_value);
    
    // TODO: Write your code below
    // 1. Use malloc() to allocate memory for one integer
    // 2. Cast the returned pointer to int*
    // 3. Store the input value in the allocated memory
    // 4. Print the stored value
    // 5. Calculate and store the square in the same location
    // 6. Print the squared value
    
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = input_value;
    printf("Stored value: %d\n", *ptr);
    *ptr = (*ptr) * (*ptr);
    printf("Squared value: %d\n", *ptr);
    
    return 0;
}