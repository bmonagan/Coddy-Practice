#include <stdio.h>

// TODO: Define the TrafficLight enum here
enum TrafficLight{
    RED,
    YELLOW,
    GREEN
};

int main() {
    // Read input
    int input;
    scanf("%d", &input);
    
    // TODO: Declare currentLight variable and assign enum value based on input
    printf("Current light: ");
    
    enum TrafficLight currentLight;
    if (input == 0){
        currentLight = RED;
        printf("RED\n");
    } else if (input == 1){
        currentLight = YELLOW;
        printf("YELLOW\n");
    } else if (input == 2){
        currentLight = GREEN;
        printf("GREEN\n");
    } else{
        printf("Must be a valid input");
        return -1;
    }
    
    // TODO: Print current light statuse

    // TODO: Print numeric value
    printf("Numeric value: %d\n", currentLight);
    // TODO: Print action based on current light
    printf("Action: ");
    switch (currentLight){
        
        case RED:
            printf("Stop\n");
            printf("Next light: GREEN\n");
            break;
        case YELLOW:
            printf("Caution\n");
            printf("Next light: RED\n");
            break;
        case GREEN:
            printf("Go\n");
            printf("Next light: YELLOW\n");
            break;
    }
    
    // TODO: Calculate and print next light
    
    return 0;
}