#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int generateFibonacciSeries(int count) {
    int i, n;
    for (i = 0; i < count; i++) {
        n = fibonacci(i);
    }
    return n;
}

int main() {
    int num_terms;
    printf("Enter a number to get the nth term of Fibonacci series:\n");
    scanf("%d", &num_terms);
    if (num_terms <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("Your nth term is: %d", generateFibonacciSeries(num_terms));
    return 0;
}