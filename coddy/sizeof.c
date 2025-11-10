#include <stdio.h>
#include <stdlib.h>

int main() {
    // Read the number of elements
    int n;
    scanf("%d", &n);
    
    // TODO: Write your code below
    // 1. Allocate memory for n double values using malloc() and sizeof()
    // 2. Cast the returned pointer to double*
    // 3. Read n double values and store them in the allocated array
    // 4. Calculate and print memory allocated in bytes
    // 5. Calculate and print the average with 2 decimal places
    // 6. Find and print the largest value with 2 decimal places
    double total = 0;
    double largest = 0;
    double average,val;
    int memory = sizeof(double) * n;
    double *values = (double*)malloc(n *sizeof(double));
    for (int i = 0; i < n; i++){
        scanf("%lf", &val);
        values[i] = val;
        total += val;
        if (val > largest){
            largest = val;
        }
    }
    
    average = total / n;
    
    printf("Memory allocated: %d bytes\n", memory);
    printf("Average: %.2f\n", average);
    printf("Largest: %.2f", largest);
    free(values);
    return 0;
}