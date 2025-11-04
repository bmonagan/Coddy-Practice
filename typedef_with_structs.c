#include <stdio.h>
#include <string.h>

// TODO: Define your struct and typedef here
typedef struct Book {
    int id;
    char title[50];
    float price;
    int quantity;
} Book;
int main() {
    // TODO: Declare your Book variables here
    Book book1, book2;
    
    // Read input for first book
    int id1, quantity1;
    char title1[50];
    float price1;
    
    scanf("%d", &id1);
    scanf("%s", title1);
    scanf("%f", &price1);
    scanf("%d", &quantity1);
    
    // TODO: Assign values to book1 members
    book1.id = id1;
    strcpy(book1.title, title1);
    book1.price = price1;
    book1.quantity = quantity1;
    
    // Read input for second book
    int id2, quantity2;
    char title2[50];
    float price2;
    
    scanf("%d", &id2);
    scanf("%s", title2);
    scanf("%f", &price2);
    scanf("%d", &quantity2);
    
    // TODO: Assign values to book2 members
    book2.id = id2;
    strcpy(book2.title, title2);
    book2.price = price2;
    book2.quantity = quantity2;
    
    // TODO: Print book information, calculate values, and compare
    printf("Book 1: ID=%d, Title=%s, Price=%.2f, Quantity=%d\n", book1.id, book1.title, book1.price, book1.quantity);
    printf("Book 2: ID=%d, Title=%s, Price=%.2f, Quantity=%d\n", book2.id, book2.title, book2.price, book2.quantity);
    float book1_value = book1.price * book1.quantity;
    float book2_value = book2.price * book2.quantity; 

    printf("Book 1 Total Value: %.2f\n", book1_value);
    printf("Book 2 Total Value: %.2f\n", book2_value);
    printf("Combined Inventory Value: %.2f\n", book1_value + book2_value);

    if (book1_value > book2_value){
        printf("Book 1 has higher value");
    } else if (book2_value > book1_value){
        printf("Book 2 has higher value");
    } else {
        printf("Both books have equal value");
    return 0;
}}