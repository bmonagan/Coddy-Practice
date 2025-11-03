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
    scanf("%s", contactPtr->name);
    printf("Enter phone: ");
    scanf("%s", contactPtr->phone);
    printf("Enter email: ");
    scanf("%s", contactPtr->email);
    printf("Enter age: ");
    scanf("%d", &contactPtr->age);

    if (contactPtr->age < 0 || contactPtr->age > 120){
        printf("Invalid age entered");
    } else if (strlen(contactPtr->email)< 10){
        printf("Invalid phone number");
    } else{
        printf("Contact populated successfully\n");
    }
}
int main() {
    struct Contact* newContact;
    
    newContact = createContact();
    
    if (newContact == NULL) {
        printf("Failed to create contact\n");
        return 1;
    }
    populateContact(newContact);
    
    printf("Contact Information:\n");
    
    printf("Name: %s\n", newContact->name);
    printf("Phone: %s\n", newContact->phone);
    printf("Email: %s\n", newContact->email);
    printf("Age: %d\n", newContact->age);
    
    free(newContact);
    printf("Contact deleted successfully\n");
    
    return 0;
}