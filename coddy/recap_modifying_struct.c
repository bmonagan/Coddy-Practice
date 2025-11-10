#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Define the Employee struct here
struct Employee { 
    int id;
    char name[50];
    char department[30];
    float salary;
    int yearsOfService;
};

// TODO: Implement fillEmployeeData function here
void fillEmployeeData(struct Employee *empPtr){
    int id;
    char name[50];
    char department[30];
    float salary;
    int yearsOfService;
    scanf("%d",&id);
    scanf("%s",name);
    scanf("%s",department);
    scanf("%f",&salary);
    scanf("%d",&yearsOfService);
    empPtr->id = id;
    strcpy(empPtr->name, name);
    strcpy(empPtr->department, department);
    empPtr->salary = salary;
    empPtr->yearsOfService = yearsOfService;
    float bonus;
    if (yearsOfService >= 5){
        bonus = salary * .1;
    } else{
        bonus = salary * .05;
    }
    empPtr->salary = salary + bonus;


}

// TODO: Implement displayEmployee function here
void displayEmployee(struct Employee *empPtr){
    printf("Employee Details:\n");
    printf("ID: %d\n", empPtr->id);
    printf("Name: %s\n", empPtr->name);
    printf("Department: %s\n", empPtr-> department);
    printf("Salary: %.2f\n", empPtr->salary);
    printf("Years of Service: %d\n",empPtr->yearsOfService);
}

// TODO: Implement promoteEmployee function here
void promoteEmployee(struct Employee *empPtr){
    empPtr->salary= empPtr->salary * 1.15;
    empPtr->yearsOfService = empPtr->yearsOfService + 1;
    printf("Employee promoted successfully!\n");
}

int main() {
    // TODO: Declare empPtr and allocate memory
    struct Employee *empPtr = malloc(sizeof(struct Employee));
    
    // TODO: Check if memory allocation was successful
    if (empPtr == NULL){
        printf("Memory not allocated");
    }
    printf("Memory allocated successfully\n");
    
    // TODO: Fill employee data, display initial data, promote, and display after promotion
    fillEmployeeData(empPtr);
    printf("Initial employee data:\n");
    displayEmployee(empPtr);
    promoteEmployee(empPtr);
    printf("After promotion:\n");
    displayEmployee(empPtr);
    
    // TODO: Free memory and print success message
    free(empPtr);
    printf("Memory freed successfully");
    
    return 0;
}