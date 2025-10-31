#include <stdio.h>

int main() {
    int n;

    do {
        printf("Enter a number\n");
        scanf("%d", &n);
    } while (n <= 0);
    
    for (int i = 0; i < 10; i++) {
        printf("%d * %d = %d\n", n, i + 1, n * (i + 1));
    }

    return 0;
}