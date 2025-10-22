#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char username[100];
    char password[100];
    int result,uc,pc;
    int successful_logins = 0;
    
    // TODO: Write your code here 
    // Process each login attempt using strcmp() function
    // Compare username with "admin" and password with "secret123"
    // Print appropriate messages and count successful logins
    for (int i = 0; i < n; i++){
        scanf("%s",username);
        scanf("%s",password);
        uc = strcmp(username, "admin") == 0;
        pc = strcmp(password, "secret123") == 0;
        if (uc == 1 && pc == 1){
            printf("Login successful\n");
            successful_logins += 1;

        } else if (pc != 1 && uc != 1){
            printf("Invalid credentials\n");

        } else if (pc == 1){
            printf("Invalid username\n");
        } else{
            printf("Invalid password\n");
        }
    }
    printf("Total successful logins: %d\n", successful_logins);
    
    return 0;
}