#include <stdio.h>

int main() {
    // TODO: Declare your character arrays here
    char username[30];
    char hobby[25];
    
    // TODO: Write your code here to prompt and read input
    printf("Enter your username:\n");
    scanf("%s",username);
    printf("Enter your hobby:\n");
    scanf("%s",hobby);
    printf("Hello %s, your hobby is %s!",username, hobby);
    
    // TODO: Print the final output message
    
    return 0;
}