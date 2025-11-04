#include <stdio.h>

// TODO: Define your enum ShapeType and typedef here
typedef enum ShapeType{
    CIRCLE,
    RECTANGLE,
    TRIANGLE
} Shape;

// TODO: Implement the calculateArea function here
float calculateArea(Shape shape, float dimension1, float dimension2){
    float area;
    switch (shape){
        case CIRCLE: 
            area = 3.14159 * dimension1 * dimension1;
            break;
        case RECTANGLE:
            area = dimension1 * dimension2;
            break;
        case TRIANGLE:
            area = 0.5 * dimension1 * dimension2;
            break;   
        }
    return area;
    }



// TODO: Implement the printShapeInfo function here
void printShapeInfo(Shape shape){
    switch (shape){
        case CIRCLE: 
            printf("Shape: Circle\n");
            break;
        case RECTANGLE:
            printf("Shape: Rectangle\n");
            break;
        case TRIANGLE:
            printf("Shape: Triangle\n");
            break; 
    }
}

int main() {
    // Read input
    int shapeChoice;
    float dim1, dim2;
    scanf("%d", &shapeChoice);
    scanf("%f", &dim1);
    scanf("%f", &dim2);
    
    // TODO: Write your code below
    // Declare selectedShape variable and assign based on shapeChoice
    Shape selectedShape;
    if (shapeChoice == 0){
        selectedShape = CIRCLE;
    } else if ( shapeChoice == 1){
        selectedShape = RECTANGLE;
    } else{
        selectedShape = TRIANGLE;
    }
    // Call printShapeInfo function
    printShapeInfo(selectedShape);
    // Print dimensions
    printf("Dimensions: %.1f %.1f\n", dim1, dim2);
    // Calculate and print area
    float area = calculateArea(selectedShape, dim1,dim2);
    printf("Area: %.2f\n", area);
    // Determine and print category
    if (area < 10.0){
        printf("Category: Small");
    } else if (area <= 50.0){
        printf("Category: Medium");
    } else{
        printf("Category: Large");
    }
    return 0;
}