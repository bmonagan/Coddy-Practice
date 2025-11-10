#include <stdio.h>
#include <stdlib.h>

int main() {
    // Read the number of integers
    int n,bytes,val;
    int sum = 0;
    scanf("%d", &n);
    
    // TODO: Write your code here
    // - Use malloc() to allocate memory for n integers
    // - Check if allocation was successful
    // - Handle both success and failure cases
    // - Read the integers and store them
    // - Calculate the sum and bytes allocated
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL){ 
        printf("Memory allocation failed\n");
        return -1;

    } else {
        printf("Memory allocation successful!\n");
        for (int i = 0; i <  n; i++){
            scanf("%d",&val);
            sum += val;

        }
    }
    bytes = sizeof(int) * n;
    printf("Sum: %d\n", sum);
    printf("Bytes allocated: %d",bytes);
    free(ptr);
    return 0;
}