#include <stdio.h>

// TODO: Define the Employee struct here
struct Employee{
    int id;
    char department[15];
    int yearsOfService;
    float salary;
};

int main() {
    // TODO: Create three Employee variables using initializer lists
    struct Employee employees[3] = {
        {101, "Engineering", 5, 75000.50},
        {102, "Marketing", 3, 65000.25},
        {103, "Sales", 8, 80000.75}
    };
    float total_salary = 0;
    int total_years = 0;         
    // TODO: Print information for each employee
    for (int i = 0; i < 3; i++){
        struct Employee current = employees[i];

        printf("Employee %d:\n", i+1);
        printf("ID: %d\n", current.id);
        printf("Department: %s\n", current.department);
        printf("Years of Service: %d\n", current.yearsOfService);
        printf("Salary: %.2f\n", current.salary);
        total_salary += current.salary;
        total_years += current.yearsOfService;
    }
    
    // TODO: Calculate and print total salary and average years of service
    printf("Total Salary: %.2f\n", total_salary);
    printf("Average Years of Service: %.2f", total_years / 3.0);
    
    return 0;
}