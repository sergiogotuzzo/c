#include <stdio.h>

int main() {
    int n1;

    do {
        printf("Enter the first number of the interval\n");
        scanf("%d", &n1);
    } while (n1 <= 0);
    
    int n2;

    do {
        printf("Enter the last number of the interval\n");
        scanf("%d", &n2);
    } while (n2 <= 0 || n2 < n1);

    for (n1; n1 <= n2; n1++) {
        int sum = 0, tmp = n1;

        while (tmp > 0) {
            int r = tmp % 10;
            sum = sum * 10 + r;
            tmp /= 10;
        }

        if (n1 == sum) {
            printf("%d\n", n1);
        }
    }
}