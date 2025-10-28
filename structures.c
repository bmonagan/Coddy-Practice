#include <stdio.h>

int main() {
    // TODO: Define your Book struct here
    struct Book {
        int id;
        char title[50];
        int pages;
        float price;
    };
    struct Book myBook;
    
    // Print confirmation message
    printf("Book struct defined successfully!\n");
    
    // TODO: Print the size of the Book struct and its members
    printf("Size of Book struct: %d bytes\n", sizeof(struct Book));
    printf("Size of id: %d bytes\n", sizeof(int));
    printf("Size of title: %d bytes\n", sizeof(((struct Book*)0)->title));
    printf("Size of pages: %d bytes\n", sizeof(int));
    printf("Size of price: %d bytes", sizeof(float));
    
    
    return 0;
}