#include <stdio.h>

// TODO: Define the Student struct here
struct Student{
    int id;
    float grade;
};

int main() {
    // TODO: Create a Student variable named student1
    struct Student student1 = {0,0};
    
    // Read input
    int id;
    float grade;
    scanf("%d", &id);
    scanf("%f", &grade);
    
    // TODO: Store the input values in the struct members
    student1.id = id;
    student1.grade = grade;
    float original_grade;
    
    // TODO: Implement grade validation and bonus calculation
    if (student1.grade >= 100.0){
        original_grade = 100.0;
    } else if (student1.grade <= 0){
        original_grade = 0.0;
    } else {
        original_grade = grade;
    }
    if (original_grade < 95){
        student1.grade = original_grade + 5;
    } else{
        student1.grade = 100;
    }
    
    // TODO: Determine grade status
    char *grade_status;

    if (grade >= 90){
        grade_status = "Excellent";

    } else if (grade >= 80){
        grade_status = "Good";

    } else if (grade >= 70) {
        grade_status = "Average";
         
    } else {
        grade_status = "Needs Improvement";
    }
    
    // Output the results
    printf("Student Information:\n");
    printf("ID: %d\n", student1.id);
    printf("Original Grade: %.1f\n",original_grade);
    printf("Bonus Grade: %.1f\n", student1.grade);
    printf("Grade Status: %s\n", grade_status);
    
    return 0;
}