#include <stdio.h>
#include <stdbool.h>
struct PrimeChecker {
    int number;
    bool isPrime;
};
void checkPrime(struct PrimeChecker *pc) {
    if (pc->number <= 1) {
        pc->isPrime = false;
        return;
    }
pc->isPrime = true; // Assume it's prime
for (int i = 2; i <= pc->number / 2; i++) {
if (pc->number % i == 0) {
            pc->isPrime = false;
            break;
        }
    }
}

int main() {
struct PrimeChecker pc;
printf("Enter a number: ");
scanf("%d", &pc.number);
checkPrime(&pc);
if (pc.isPrime)
printf("%d is a prime number.\n", pc.number);
else
printf("%d is not a prime number.\n", pc.number);
 return 0;
}
