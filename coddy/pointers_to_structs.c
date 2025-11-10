#include <stdio.h>
#include <string.h>

// TODO: Define the Product struct here
struct Product {
    int id;
    char name[25];
    float price;
    int quantity;
};

int main() {
    // TODO: Write your code here
    // 1. Create and initialize the Product variable 'item'
    struct Product item = {501, "Laptop", 899.99, 15};
    // 2. Declare a pointer to Product named 'itemPtr'
    struct Product *itemPtr ;
    itemPtr = &item;
    // 3. Assign the address of 'item' to 'itemPtr'
    // 4. Print original product info using dot operator
    printf("Original Product Info:\n");
    printf("ID: %d\n", item.id);
    printf("Name: %s\n", item.name);
    printf("Price: %.2f\n", item.price);
    printf("Quantity: %d\n", item.quantity);
    // 5. Print product info via pointer using (*itemPtr).member
    printf("Product Info via Pointer:\n");
    printf("ID: %d\n", itemPtr->id);
    printf("Name: %s\n", itemPtr->name);
    printf("Price: %.2f\n", itemPtr->price);
    printf("Quantity: %d\n", itemPtr->quantity);
    // 6. Print and verify addresses
    printf("Address of item: %p\n", &item);
    printf("Value of itemPtr: %p\n", itemPtr);
    printf("Address verification: ");
    if (&item == itemPtr){
        printf("Match");
    } else{
        printf("No Match");
    }
    
    return 0;
}