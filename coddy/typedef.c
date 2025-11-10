#include <stdio.h>

// TODO: Create typedef aliases here
typedef float Temperature;
typedef int SensorID;
typedef int Status;

int main() {
    // TODO: Declare variables using the typedef aliases
    SensorID sensor;
    Temperature currentTemp, threshold;
    Status alertStatus;
    
    // Read input values
    scanf("%d", &sensor);
    scanf("%f", &currentTemp);
    scanf("%f", &threshold);
    scanf("%d", &alertStatus);
    
    // TODO: Write your code below to print sensor information and perform analysis

    printf("Sensor ID: %d\n", sensor);
    printf("Current Temperature: %.1f\n", currentTemp);
    printf("Threshold: %.1f\n", threshold);
    printf("Alert Status: %d\n", alertStatus);
    
    Temperature difference = currentTemp - threshold;
    printf("Temperature Difference: %.1f\n", difference);

    if (currentTemp < 0.0){
        printf("Category: Freezing\n");
    } else if (currentTemp <= 25.0){
        printf("Category: Normal\n");
    } else {
        printf("Category: Hot\n");
    }

    if (currentTemp > threshold && alertStatus == 1){
        printf("Alert: Temperature exceeded threshold!");
    } else {
        printf("Alert: No alert triggered");
    }
    return 0;
}