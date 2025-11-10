#include <stdio.h>
#include <string.h>

int main() {
    // Read the number of words
    int n;
    scanf("%d", &n);
    
    // Variables to track totals
    int total_characters = 0;
    int max_length = 0;
    
    // TODO: Write your code here
    // Process each word using a loop
    // For each word:
    // - Declare a character array with 50 elements
    // - Read the word using scanf
    // - Calculate length using strlen()
    // - Print the word and its length
    // - Update total_characters and max_length
    for (int i = 0; i < n; i++){
        char arr[50];
        scanf("%s", arr);
        int string_length = strlen(arr);
        total_characters += string_length;
        if (string_length > max_length){
            max_length = string_length;
        }
        printf("Word: %s - Length: %d\n", arr,string_length);
    }
    
    // Print final results
    printf("Total characters: %d\n", total_characters);
    printf("Longest word length: %d\n", max_length);
    
    return 0;
}