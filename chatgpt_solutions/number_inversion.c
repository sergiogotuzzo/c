#include <stdio.h>

int main() {
    int n;

    do {
        printf("Enter the number\n");
        scanf("%d", &n);
    } while (n <= 0);

    int sum = 0;

    while (n > 0) {
        int r = n % 10;
        sum = sum * 10 + r;
        n /= 10;
    }

    printf("%d\n", sum);
}