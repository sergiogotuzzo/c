#include <stdio.h>

int main() {
    int n1, n2;

    do {
        printf("Enter the first number of the interval: ");
        scanf("%d", &n1);
    } while (n1 < 0);

    do {
        printf("Enter the last number of the interval: ");
        scanf("%d", &n2);
    } while (n2 < 0 || n2 < n1);

    printf("Palindromic numbers between %d and %d:\n", n1, n2);

    for (int i = n1; i <= n2; i++) {
        int reversed = 0, tmp = i;

        while (tmp > 0) {
            reversed = reversed * 10 + (tmp % 10);
            tmp /= 10;
        }

        if (i == reversed) {
            printf("%d\n", i);
        }
    }

    return 0;
}
