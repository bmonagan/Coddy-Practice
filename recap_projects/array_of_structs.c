#include <stdio.h>
#include <string.h>

// TODO: Define the Product struct here
struct Product {
    char name[30];
    float price;
    int stock;
};

// TODO: Implement the findMostExpensive function here
int findMostExpensive(struct Product inventory[], int size){
    int high_idx = 0;
    float high_price = inventory[0].price;
    for (int i = 0; i < size; i++){
        if (inventory[i].price > high_price){
            high_price = inventory[i].price;
            high_idx = i;
        } }
    return high_idx;
}

// TODO: Implement the calculateTotalValue function here
float calculateTotalValue(struct Product inventory[], int size){
    float total_value = 0;

    for (int i = 0; i < size; i ++){
        total_value += (inventory[i].price * inventory[i].stock);
        }
    
    return total_value;

}

// TODO: Implement the findLowStock function here
int findLowStock(struct Product inventory[], int size, int threshold){
    int less_than_threshhold = 0;
     for (int i = 0; i < size; i ++){
        if (inventory[i].stock < threshold){
            less_than_threshhold += 1;
        }
        }
    return less_than_threshhold;


}

int main() {
    // Create array of 3 products
    struct Product inventory[3];
    
    // Read input for each product
    for (int i = 0; i < 3; i++) {
        scanf("%s", inventory[i].name);
        scanf("%f", &inventory[i].price);
        scanf("%d", &inventory[i].stock);
    }
    
    // TODO: Print each product's information
    for (int i = 0; i < 3; i++) {
        printf("Product %d: %s - Price: %.2f, Stock: %d\n", i, inventory[i].name, inventory[i].price, inventory[i].stock);
    }

    
    // TODO: Find and print the most expensive product
    int mostexpensive = findMostExpensive(inventory,3);
    printf("Most expensive product: %s\n", inventory[mostexpensive].name);
    
    // TODO: Calculate and print total inventory value
    float total_inventory = calculateTotalValue(inventory, 3);
    printf("Total inventory value: %.2f\n", total_inventory);
    
    // Read low stock threshold
    int threshold;
    scanf("%d", &threshold);
    
    // TODO: Find and print products with low stock
    int below_thresh = findLowStock(inventory, 3, threshold);
    printf("Products with low stock: %d\n",below_thresh);
    
    // TODO: Check if most expensive product is well stocked
    if(inventory[mostexpensive].stock > 10){
        printf("Most expensive product is well stocked");
    } else {
        printf("Most expensive product needs restocking");

    }
    
    return 0;
}