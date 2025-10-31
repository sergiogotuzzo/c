#include <stdio.h>

/*
max = 20

1 + 3 = 4 = 2^2
1 + 3 + 5 = 9 = 3^2
1 + 3 + 5 + 7 = 16 = 4^2
...
1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19 + 21 + 23 + 25 + 27 + 29 + 31 + 33 + 35 + 37 + 39 + 41 = 441 = 21^2
*/

int main() {
    int max;

    printf("Enter the quantity of perfect squares\n");
    scanf("%d", &max);

    int n = 1, sum = n, i = 0;

    while (++i <= max) {
        n += 2;
        sum += n;

        printf("%d^2 = %d\n", i + 1, sum);
    }

    return 0;
}