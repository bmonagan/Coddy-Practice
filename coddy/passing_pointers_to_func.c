#include <stdio.h>

// TODO: Write your displayValue function here
void displayValue(int *ptr){
    int value = *ptr;
    printf("Value at address: %d\n",value);
    

}

int main() {
    // TODO: Write your code here
    // 1. Declare and initialize the number variable
    int number = 42;
    // 2. Print the original value
    printf("Original value: %d\n", number);
    // 3. Call the displayValue function
    displayValue(&number);
    // 4. Print the completion message
    printf("Function call completed");
    return 0;
}