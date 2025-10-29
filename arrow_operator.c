#include <stdio.h>
#include <string.h>

// TODO: Define the Book struct here
struct Book {
    int id;
    char title[40];
    char author[30];
    float price;
    int pages;
};

int main() {
    // TODO: Create a Book variable named myBook
    struct Book myBook;
    // TODO: Declare a pointer to Book named bookPtr
    struct Book *bookPtr;
    // TODO: Assign the address of myBook to bookPtr
    bookPtr = &myBook;
    
    // Read input values
    int id;
    char title[40];
    char author[30];
    float price;
    int pages;
    
    scanf("%d", &id);
    scanf("%s", title);
    scanf("%s", author);
    scanf("%f", &price);
    scanf("%d", &pages);
    
    // TODO: Assign the input values to struct members using arrow operator
    bookPtr->id = id;
    strcpy(bookPtr->title, title);
    strcpy(bookPtr->author, author);
    bookPtr->price = price;
    bookPtr->pages = pages;
    
    // TODO: Apply 10% discount to price using arrow operator
    bookPtr->price = bookPtr-> price *0.9;
    
    // TODO: Add 50 bonus pages using arrow operator
    bookPtr->pages = bookPtr->pages + 50;
    
    // TODO: Print book information using arrow operator
    printf("Book Information:\n");
    printf("ID: %d\n", bookPtr->id);
    printf("Title: %s\n", bookPtr->title);
    printf("Author: %s\n", bookPtr->author);
    printf("Price: %.2f\n", bookPtr->price);
    printf("Pages: %d\n", bookPtr->pages);
    
    // TODO: Calculate and print price per page using arrow operator
    float price_per_page = bookPtr->price / bookPtr->pages;
    printf("Price per page: %.2f", price_per_page);
    
    return 0;
}