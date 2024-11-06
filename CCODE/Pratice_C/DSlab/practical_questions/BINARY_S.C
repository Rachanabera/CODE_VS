# include <stdio.h>
# include <conio.h>
# define N 8

int a [N];

int binary_search() {
    int n = 0, c = 0, first = 0, mid = 0, last = N-1;
    printf("Enter the number that need to be searched:\n");
    scanf("%d",&n);
    while(first <= last) {
        mid = (first + last) / 2;
        if(n == a[mid]) {
            c = mid;
            break;
        } else if(n > a[mid]) {
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }
    if(c > 0) {
        printf("Number found at index %d\n", c);
    } else {
        printf("Number not found\n");
    }
}
int main() {
    int i, j, c = 0;
    clrscr();
    printf("Enter your numbers:\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < N; i++) {    
        for(j = 0; j < N-1-i; j++) {
            int temp = 0;    
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Your list of number in ascending order:\n");
    for(i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    while(1){
        printf("****Options****\n1. Search\n2. Exit\nEnter your choice: ");
        scanf("%d", &c);
        switch(c) {
            case 1:
                binary_search();
            break;
            case 2:
                return 0;
            break;
            default:
                printf("Invalid Input!!!!!\n");
            break;
        }
    }
    getch();
    return 0;
}