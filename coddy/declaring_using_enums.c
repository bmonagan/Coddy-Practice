#include <stdio.h>


// TODO: Define the TaskStatus enum here
enum TaskStatus {
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    CANCELLED,
};

int main() {
    // Read input for three task statuses
    int status1, status2, status3;
    scanf("%d", &status1);
    scanf("%d", &status2);
    scanf("%d", &status3);
    
    // TODO: Declare three enum TaskStatus variables (task1, task2, task3)
    enum TaskStatus task1, task2, task3;
    int pending_tasks = 0;
    int in_progress_tasks = 0;
    int completed_tasks = 0;
    int cancelled_tasks = 0;
    
    // TODO: Assign enum values based on input
    if ( status1 == 0){
        task1 = PENDING;
        pending_tasks += 1;

    } else if (status1 == 1 ){
        task1 = IN_PROGRESS;
        in_progress_tasks += 1;

    } else if (status1 == 2){
        task1 = COMPLETED;
        completed_tasks += 1;

    } else if (status1 == 3){
        task1 = CANCELLED;
        cancelled_tasks += 1;

    }
    if ( status2 == 0){
        task2 = PENDING;
        pending_tasks += 1;

    } else if (status2 == 1 ){
        task2 = IN_PROGRESS;
        in_progress_tasks += 1;

    } else if (status2 == 2){
        task2 = COMPLETED;
        completed_tasks += 1;

    } else if (status2 == 3){
        task2 = CANCELLED;
        cancelled_tasks += 1;

    }
    if ( status3 == 0){
        task3 = PENDING;
        pending_tasks += 1;

    } else if (status3 == 1 ){
        task3 = IN_PROGRESS;
        in_progress_tasks += 1;

    } else if (status3 == 2){
        task3 = COMPLETED;
        completed_tasks += 1;

    } else if (status3 == 3){
        task3 = CANCELLED;
        cancelled_tasks += 1;}
    
    // TODO: Print task statuses
    printf("Task 1 status: %d\n", task1);
    printf("Task 2 status: %d\n", task2);
    printf("Task 3 status: %d\n", task3);
    
    // TODO: Count tasks in each category
    printf("Pending tasks: %d\n", pending_tasks);
    printf("In progress tasks: %d\n", in_progress_tasks);
    printf("Completed tasks: %d\n", completed_tasks);
    printf("Cancelled tasks: %d\n", cancelled_tasks);

    
    
    // TODO: Calculate and print active tasks count
    printf("Active tasks: %d", pending_tasks+in_progress_tasks);
    
    return 0;
}