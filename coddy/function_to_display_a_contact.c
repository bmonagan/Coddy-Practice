#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

struct Contact* createContact() {
    struct Contact* contactPtr = (struct Contact*)malloc(sizeof(struct Contact));
    
    if (contactPtr == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    
    
    contactPtr->name[0] = '\0';
    contactPtr->phone[0] = '\0';
    contactPtr->email[0] = '\0';
    contactPtr->age = 0;
    
    return contactPtr;
}

void populateContact(struct Contact *contactPtr){
    printf("Enter name: ");
    fgets(contactPtr->name, sizeof(contactPtr->name),stdin);
    printf("Enter phone: ");
    fgets(contactPtr->phone, sizeof(contactPtr->phone),stdin);
    printf("Enter email: ");
    fgets(contactPtr->email, sizeof(contactPtr->email),stdin);
    printf("Enter age: ");
    scanf("%d", &contactPtr->age);

    // if (contactPtr->age < 0 || contactPtr->age > 120){
    //     printf("Invalid age entered");
    // } else if (strlen(contactPtr->email)< 10){
    //     printf("Invalid phone number");
    // } else{
    
    
}

void displayContact(const struct Contact *contactPtr) {
    printf("=== CONTACT DETAILS ===\n");
    printf("Name: %s", contactPtr->name);
    printf("Phone: %s",contactPtr->phone);
    printf("Email: %s", contactPtr->email);
    printf("Age: %d years old\n", contactPtr->age);
    printf("========================\n");
    printf("Name length: %ld characters\n", strlen(contactPtr->name)-1);
    printf("Generation: ");
    if (contactPtr->age >= 60){
        printf("Senior\n");
    } else if (contactPtr->age >= 40){
        printf("Middle-aged Adult\n");
    } else if (contactPtr->age >= 20){
        printf("Young Adult\n");
    } else if (contactPtr->age >= 13){
        printf("Teenager\n");
    } else {
        printf("Child\n");
    }
    int valid_email = 0;
    size_t email_len = strlen(contactPtr->email);
    if (email_len > 2) { // Need at least X@Y
        for (int i = 1; i < email_len - 1; i++){
            if (contactPtr->email[i] == '@'){
                valid_email = 1;
                break;
        }}}

    printf("Email format: ");
    if (valid_email == 1){
        printf("Valid");

    } else {
        printf("Invalid");
    }
    printf("\n");
}
int main() {
    struct Contact* newContact;
    
    newContact = createContact();
    
    if (newContact == NULL) {
        printf("Failed to create contact\n");
        return 1;
    }
    populateContact(newContact);
    displayContact(newContact);
    free(newContact);
    printf("Program completed successfully\n");
    
    return 0;
}