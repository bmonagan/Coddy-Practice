#include <stdio.h>
#include <string.h>
#include <ctype.h> // Required for tolower()

int is_vowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    // TODO: Write your code here
    // 1. Print the prompt message
    printf("Enter a sentence: ");
    // 2. Declare a character array named 'sentence' with 200 elements
    char sentence[200];
    int vowel_count = 0;
    // 3. Read input using scanf with %s format specifier
    scanf("%s",&sentence);
    // 4. Print the entered word and its length
    printf("You entered: %s\n", sentence);
    int length = strlen(sentence);
    printf("Character count: %d\n", length);
    printf("Length: %d\n", length);
    for (int i = 0; sentence[i] != '\0'; i++){
        // Print the character being processed
        
        if (is_vowel(sentence[i])){
            vowel_count++;
        }
    }
    for (int i = 0; sentence[i] != '\0'; i++){
        sentence[i] = toupper(sentence[i]);
    }
    printf("Vowel count: %d\n",vowel_count);
    printf("Uppercase: %s", sentence);
    return 0;
}