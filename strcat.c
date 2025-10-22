#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Read the number of people
    int n;
    char sn[100];
    scanf("%d", &n);
    char firstname[100];
    char lastname[100];
    char fullname[100];
    char greeting[100];
    char summary[100];
    
    // TODO: Write your code below
    // Process each person and create greeting messages
    // Then create and display the summary message
    for (int i = 0; i < n; i++){
        scanf("%s%s",firstname,lastname);
        strcpy(fullname,firstname);
        strcat(fullname, " ");
        strcat(fullname, lastname);
        strcpy(greeting,"Hello, ");
        strcat(greeting, fullname);
        strcat(greeting, "! Welcome to our program.");
        printf("%s\n",greeting);
        
    }
    strcpy(summary, "Total people processed: ");
    snprintf(sn, sizeof(sn), "%d", n);
    strcat(summary,sn);
    printf("%s",summary);

    
    return 0;
}