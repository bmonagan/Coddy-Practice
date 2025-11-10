#include <stdio.h>
#include <string.h>

// TODO: Define the Contact struct here
struct Contact {
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

int main() {
    // TODO: Create a Contact variable named person
    struct Contact person;

    
    // Read input values
    scanf("%s", &person.name);
    scanf("%s", &person.phone);
    scanf("%s", &person.email);
    scanf("%d", &person.age);
    
    // TODO: Write your validation and output code below
    if (person.age > 120 || person.age < 0){
        printf("Invalid age");
        return -1;
    }
    if (strlen(person.phone)< 10){
        printf("Invalid phone number");
        return -1;
    }
    printf("Contact Information:\n");
    printf("Name: %s\n",person.name);
    printf("Phone: %s\n",person.phone);
    printf("Email: %s\n", person.email);
    printf("Age: %d\n",person.age);

    printf("Name length: %d\n", strlen(person.name));
    if (person.age >= 65){
        printf("Category: Senior");
    } else if (person.age >= 18){
        printf("Category: Adult");
    } else {
        printf("Category: Minor");
    }
    
    return 0;
}