#include <stdio.h>

int main() {
    int n1, n2;
    char c;
    printf("Enter your expression: ");
    scanf("%d %c %d",&n1,&c,&n2);
    
    if (c == '+') {
        printf("ans: %d", (n1 + n2));
    }
    else if (c == '-') {
        printf("ans: %d", (n1 - n2));
    }
    else if (c == '*') {
        printf("ans: %d", (n1 * n2));
    }
    else if (c == '/') {
        if(n2 != 0) {
            printf("ans: %d", (n1 / n2));
        }
        else {
            printf("Can not divide by 0.");
        }
    }
    
    return 0;
}