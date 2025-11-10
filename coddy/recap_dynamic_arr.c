#include <stdio.h>
#include <stdlib.h>

int main() {
    // Read the number of elements
    int n;
    int sum = 0;
    int minimum = 10000;
    scanf("%d", &n);
    
    // TODO: Write your code below
    // 1. Allocate memory for n integers using malloc()
    // 2. Check if allocation was successful
    // 3. Read n integers into the array
    // 4. Calculate sum, find minimum, count elements above average
    // 5. Print results and free memory
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL){
        printf("Memory allocation failed");
        return -1;
    }
    printf("Array of size %d created successfully!\n", n);
    for (int i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        if (arr[i] < minimum){
            minimum = arr[i];
        }
    }
    printf("Sum: %d\n", sum);
    printf("Minimum: %d\n",minimum);
    int average = sum / n;
    int above = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > average){
            above += 1;
        }}
    printf("Elements above average: %d\n", above);
    printf("Memory used: %d bytes\n", sizeof(int) * n );
    free(arr);
    printf("Memory successfully freed!");
    return 0;
}