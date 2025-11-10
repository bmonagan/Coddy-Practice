#include <stdio.h>
#include <stdlib.h>

int main() {
    int count;
    int sum = 0;
    int max = 0;
    
    // Read the number of integers to store
    scanf("%d", &count);
    
    // TODO: Write your code below
    // 1. Allocate memory using malloc() with sizeof()
    // 2. Check if allocation was successful
    // 3. Read the integer values and store them
    // 4. Calculate sum and find maximum
    // 5. Free the allocated memory
    int *ptr = (int*)malloc(count * sizeof(int));

    if (ptr == NULL){
        printf("Memory not sucessfully allocated\n");
        return -1;
    }
    printf("Memory allocated successfully!\n");
    for (int i = 0; i < count; i++){
        scanf("%d", &ptr[i]);    
    }

    for (int i = 0; i < count; i++){
        sum += ptr[i];
        if (ptr[i] > max){
            max = ptr[i];
        }
    }
    printf("Sum: %d\n", sum);
    printf("Maximum: %d\n",max);
    free(ptr);
    printf("Memory freed successfully!");
    
    return 0;
}