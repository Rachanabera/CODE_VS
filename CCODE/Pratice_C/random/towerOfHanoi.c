#include<stdio.h>
#include <math.h>

void towerOfHanoi(int n, char a, char b, char c);

int main() {
    int n = 0;
    printf("Enter number of Disks:\n");
    while(n <= 0) {
        printf("number of Disks must be more than Zero:\n");
        scanf("%d", &n);
    }
    printf("Tower of hanoi.\n");
    towerOfHanoi(n, 'A', 'B', 'C');
    printf("Number of steps are %d.\n", ((int)(pow(2, n) - 1)));
    return 0;
}

void towerOfHanoi(int n, char a, char b, char c) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", a, c);
        return;
    }
    towerOfHanoi(n - 1, a, c, b);
    printf("move disk %d from %c to %c\n", n, a, c);
    towerOfHanoi(n - 1, b, a, c);
}