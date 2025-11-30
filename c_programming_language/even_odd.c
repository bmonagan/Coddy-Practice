#include <stdio.h>
int main(void){
    int number;
    scanf("%d", &number);

    return number % 2 == 0 ? printf("Even\n") : printf("Odd\n");
}
