#include <stdio.h>
#include <stdbool.h>

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
    } while (n2 <= 0);

    for (;n1 <= n2;n1++) {
        bool isPrime = true;

        for (int i = 2; i < (n1 - 1); i++) {
            if ((n1 % i) == 0) {
                isPrime = false;
            }
        }

        if (isPrime) {
            printf("%d\n", n1);
        }
    }
}