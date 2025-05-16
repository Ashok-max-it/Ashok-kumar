#include <stdio.h>

int main() {
    float salaries[5];
    float sum = 0.0, average;
    int i;
    for(i = 0; i < 5; i++) {
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        sum += salaries[i];
    }

    average = sum / 5;

    
    printf("Average salary of 5 employees: %.2f\n", average);

    return 0;
}
