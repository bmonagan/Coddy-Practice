#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char word1[100], word2[100];
    char combined[200];
    char longest_combined[200] = "";
    
    // TODO: Write your code here
    // Process each word pair and find the longest combined string
    for (int i = 0; i < n; i++){
        scanf("%s", &word1);
        scanf("%s", &word2);
        int len1 = strlen(word1);
        int len2 = strlen(word2);
        printf("Word 1: %s (Length: %d)\n",word1,len1);
        printf("Word 2: %s (Length: %d)\n", word2,len2);
        int comparison = strcmp(word1,word2);
        if (comparison == 0){
            printf("Comparison: identical\n");
        } else{
            printf("Comparison: different\n");
        }
        strcpy(combined,word1);
        strcat(combined, " ");
        strcat(combined, word2);
        printf("Combined: %s\n", combined);
        if (strlen(combined) > strlen(longest_combined)){
            // FIX: You must use strcpy to copy the string content. 
            // C doesn't allow direct assignment of arrays/strings with '='.
            strcpy(longest_combined, combined); 
        }
        } 
        printf("Longest combined string: %s", longest_combined);
    
    return 0;
}