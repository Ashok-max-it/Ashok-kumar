#include <stdio.h>
int main() {
    float marks;
    printf("Enter student's marks (0 - 100): ");
    scanf("%f", &marks);
    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered.\n");
    }
    else if (marks >= 75) {
        printf("Result: Distinction\n");
    }
    else if (marks >= 40) {
        printf("Result: Pass\n");
    }
    else {
        printf("Result: Fail\n");
    }

    return 0;
}
