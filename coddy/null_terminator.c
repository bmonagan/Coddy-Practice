#include <stdio.h>

int main() {
    // TODO: Write your code here
    // Declare and initialize the character arrays as specified
    char name[5] = {'J', 'o','h','n','\0'};
    char city[7] = {'B','o','s','t','o','n','\0'};
    char test[4] = {'A','B','C','D'}; 
    
    // Print the results
    printf("Name: %s\n", name);
    printf("City: %s\n", city);
    printf("Test without null terminator: %s",test);
    
    return 0;
}