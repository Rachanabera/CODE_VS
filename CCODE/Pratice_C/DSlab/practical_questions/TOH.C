# include <stdio.h>
# include <math.h>
# include <conio.h>

void toh(int n, char a, char b, char c);

int main() {
    int n = 0;
    clrscr();
    printf("Enter number of disks:\n");
    scanf("%d",&n);
    toh(n,'A','B','C');
    printf("Number of steps are %d.\n",((int)(pow(2,n)-1)));
    getch();
    return 0;
}

void toh(int n, char a, char b, char c) {
    if(n==1) {
        printf("Move disk 1 from %c to %c\n",a,c);
        return;
    }
    toh(n-1, a, c, b);
    printf("move disk %d from %c to %c\n", n, a, c);
    toh(n-1, b, a, c);
}