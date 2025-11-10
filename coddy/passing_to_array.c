#include <stdio.h>

// TODO: Create the analyzeTemperatures function here
void analyzeTemperatures(int arr[], int size){
    float total = 0;
    float average;
    int highest = 0;
    int abovetemp = 0;
    for (int i = 0; i < size; i++){
        total += arr[i];
        if (arr[i] > highest){
            highest = arr[i];
        }
        if (arr[i] > 25){
            abovetemp += 1;
        }
    }
    average = total / size;
    printf("Average temperature: %.1f\n", average);
    printf("Highest temperature: %d\n", highest);
    printf("Days above 25 degrees: %d", abovetemp);
}

int main() {
    // Read number of temperature readings
    int n;
    scanf("%d", &n);
    
    // Declare array to store temperatures
    int temperatures[n];
    
    // Read temperature values
    for (int i = 0; i < n; i++) {
        scanf("%d", &temperatures[i]);
    }
    
    // TODO: Call the analyzeTemperatures function here
    analyzeTemperatures(temperatures, n);
    
    return 0;
}