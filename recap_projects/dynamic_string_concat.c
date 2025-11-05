#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Write your concatenateStrings function here
char* concatenateStrings(const char* str1, const char* str2){
    size_t total_size = strlen(str1) + strlen(str2) + 1;
    char *result = (char*)malloc(total_size);
    if (result == NULL){
        fprintf(stderr, "Error: Memory allocation failed during concatenation.\n");
        return NULL;
    }
    strcpy(result,str1);
    strcat(result,str2);
    return result;
}

// TODO: Write your processText function here
char* processText(char* word1, char*word2, char* separator){
    char* first_combine = concatenateStrings(word1,separator);
    if (first_combine == NULL){
        return NULL;
    }
    char* second_combine = concatenateStrings(first_combine, word2);
    free(first_combine);
    return second_combine;
}

int main() {
    // Read input
    char firstWord[50];
    char secondWord[50];
    char connector[50];
    
    scanf("%s", firstWord);
    scanf("%s", secondWord);
    scanf("%s", connector);
    
    // TODO: Write your code below
    // Call processText function and handle the result
    char* output = processText(firstWord,secondWord,connector);
    if (output == NULL){
        printf("Memory allocation failed");
        return -1;
    }
    printf("Result: %s\n", output);
    size_t output_length = strlen(output);
    printf("Length: %zu", output_length);
    free(output);

    
    return 0;
}