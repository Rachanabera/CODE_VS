#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

void printFibonacciSeries(int count) {
    int i;
    printf("Fibonacci Series:\n");
    for (i = 0; i < count; i++) {
        printf("%d ", fibonacci(i));
    }
}

int main() {
    int num_terms;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &num_terms);
    while (num_terms <= 0) {
        printf("Please enter a positive integer.\n");
        scanf("%d", &num_terms);
    }
    printFibonacciSeries(num_terms);
    return 0;
}