#include <stdio.h>

int factorial(int n);

int main() {
    int number;
    int fact;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial of a negative number does not exist.");
    } else {
        fact = factorial(number);
        printf("Factorial of %d = %llu\n", number, fact);
    }

    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        int fact = n * factorial(n - 1);
        return fact;
    }
}
