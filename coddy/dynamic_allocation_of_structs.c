#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Define the Car struct  
struct Car {
    int year;
    char brand[20];
    char model[25];
    float price;
    int mileage;
};

int main() {
    // TODO: Declare a pointer to Car struct named carPtr
    struct Car *carPtr = malloc(sizeof(struct Car));
    
    // TODO: Use malloc() to allocate memory for one Car struct
    
    // TODO: Check if memory allocation was successful
    if (carPtr == NULL){
        printf("Memory allocation failed");
        return -1;
    }
    printf("Memory allocation successful\n");
    
    // Read input values
    int year, mileage;
    char brand[20], model[25];
    float price;
    
    scanf("%d", &year);
    scanf("%s", brand);
    scanf("%s", model);
    scanf("%f", &price);
    scanf("%d", &mileage);
    
    // TODO: Assign input values to struct members using arrow operator
    carPtr->year = year;
    strcpy(carPtr->brand,brand);
    strcpy(carPtr->model,model);
    carPtr->price = price;
    carPtr->mileage = mileage;

    
    // TODO: Calculate age, depreciation, and current value
    float depreciation;
    int age = 2024 - carPtr->year;
    if (age > 10){
        depreciation = 0.6;
    } else {
        depreciation = 0.8;
    }
    
    
    float current_value = carPtr->price * depreciation;
    
    // TODO: Print car information in the required format
    printf("Car Information:\n");
    printf("Year: %d\n", carPtr->year);
    printf("Brand: %s\n", carPtr->brand);
    printf("Model: %s\n", carPtr->model);
    printf("Original Price: %.2f\n", carPtr->price);
    printf("Mileage: %d\n", carPtr->mileage);
    printf("Age: %d years\n", age);
    printf("Current Value: %.2f\n", current_value);
    
    // TODO: Free the allocated memory and print success message
    free(carPtr);
    printf("Memory freed successfully");
    return 0;
}