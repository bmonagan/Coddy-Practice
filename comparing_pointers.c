#include <stdio.h>

int main() {
    // TODO: Write your code below
    int scores[8] =  {45, 78, 92, 63, 87, 34, 91, 56};
    int *start_ptr = scores;
    int *end_ptr = (scores+7);
    int *current_ptr = scores;

    while (current_ptr <= end_ptr){
        if (60 <= *current_ptr && 90 >= *current_ptr){
            printf("Value %d is in range\n", *current_ptr);
        } else {
            printf("Value %d is out of range\n", *current_ptr);
        }
        current_ptr++;
    }
    if (current_ptr > end_ptr){
        printf("Traversal complete");
    }
    
    return 0;
}