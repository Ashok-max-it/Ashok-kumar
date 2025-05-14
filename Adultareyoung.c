#include <stdio.h>

int main() {
    int age;

    // Ask the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if the user is young or adult
    if (age < 18) {
        printf("You are Young.\n");
    } else {
        printf("You are an Adult.\n");
    }

    return 0;
}
