#include <stdio.h>

int main() {
    // TODO: Write your code here
    // Declare and initialize the character arrays as specified in the challenge
    char greeting[6] = "Hello";
    char message[20] = "Welcome";
    char word[] = "Programming";
    
    // Print the strings and their sizes
    printf("greeting: %s\n", greeting);
    printf("message: %s\n", message);
    printf("word: %s\n", word);
    printf("Size of greeting: %lu\n", sizeof(greeting));
    printf("Size of message: %lu\n", sizeof(message));
    printf("Size of word: %lu\n", sizeof(word));

    return 0;
}