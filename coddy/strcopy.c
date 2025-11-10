#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char source[100];
    char destination[100];
    
    // TODO: Write your code here
    // Use a loop to process n string operations
    // For each operation:
    // - Read the source string
    // - Use strcpy() to copy source to destination
    // - Print both strings in the required format
    for (int i = 0; i<n; i++){
        scanf("%s", source);
        strcpy(destination,source);
        printf("Source: %s\n",source);
        printf("Destination: %s\n",destination);

    }
    
    // TODO: After the loop, modify the first character of the last destination
    // and print the modified string
    destination[0] = 'X';
    printf("Modified last destination: %s",destination);

    
    return 0;
}