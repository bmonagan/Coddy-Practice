#include <stdio.h>
#include <string.h>

int extractWord(char* sentence, int startIndex, char* word) {
    int i = 0;
    int index = startIndex;
    
    // Skip leading spaces
    while (sentence[index] == ' ' && sentence[index] != '\0') {
        index++;
    }
    
    // Extract word until space or null terminator
    while (sentence[index] != ' ' && sentence[index] != '\0') {
        word[i] = sentence[index];
        i++;
        index++;
    }
    
    // Add null terminator
    word[i] = '\0';
    
    return index;
}

int countWordOccurrences(char* sentence, char* targetWord) {
    int count = 0;
    int index = 0;
    char currentWord[50];
    
    while (sentence[index] != '\0') {
        index = extractWord(sentence, index, currentWord);
        
        if (strlen(currentWord) > 0 && strcmp(currentWord, targetWord) == 0) {
            count++;
        }
        
        // Skip spaces
        while (sentence[index] == ' ' && sentence[index] != '\0') {
            index++;
        }
    }
    
    return count;
}

int analyzeText(char* sentence) {
    int wordCount = 0;
    int i = 0;
    int inWord = 0;
    
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ') {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        i++;
    }
    
    return wordCount;
}

int main() {
    char inputSentence[200];
    char searchWord[50];
    
    // Read input sentence
    fgets(inputSentence, sizeof(inputSentence), stdin);
    // Remove newline character if present
    inputSentence[strcspn(inputSentence, "\n")] = '\0';
    
    // Read search word
    scanf("%s", searchWord);
    
    // Call analyzeText function and store total word count
    int totalWords = analyzeText(inputSentence);
    
    // Call countWordOccurrences function and store occurrences
    int occurrences = countWordOccurrences(inputSentence, searchWord);
    
    // Calculate frequency percentage
    float frequency = 0.0;
    if (totalWords > 0) {
        frequency = ((float)occurrences / totalWords) * 100.0;
    }
    
    // Determine frequency category
    char* category;
    if (frequency == 0.0) {
        category = "Not found";
    } else if (frequency > 0.0 && frequency < 20.0) {
        category = "Rare";
    } else if (frequency >= 20.0 && frequency <= 50.0) {
        category = "Common";
    } else {
        category = "Frequent";
    }
    
    // Output results in the required format
    printf("Total words: %d\n", totalWords);
    printf("Occurrences of '%s': %d\n", searchWord, occurrences);
    printf("Frequency: %.1f%%\n", frequency);
    printf("Category: %s\n", category);
    
    return 0;
}