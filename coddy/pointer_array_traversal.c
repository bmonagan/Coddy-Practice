#include <stdio.h>

// TODO: Write your calculateSum function here
int calculateSum(int *arr, int size){
    int sum = 0;
    int *ptr = arr;
    int *end = ptr + size;
    while (ptr < end){
        sum += *ptr;
        ptr++;
    }
    return sum;
}

int main() {
    int n,value;
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    value = calculateSum(arr, n);
    printf("Sum: %d",value);

    
    // TODO: Call calculateSum function and store the result
    
    // TODO: Print the result in format "Sum: [value]"
    
    return 0;
}