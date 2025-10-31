#include <stdio.h>

int pow(int n, int e) {
    int res = 1;

	for (int i = 0; i < e; i++) {
		res *= n;
	}

    return res;
}

int main() {
    int n;

    do {
        printf("Enter the number in base 2\n");
        scanf("%d", &n);
    } while (n <= 0);

    int sum = 0;

    for (int i = 0; n > 0; i++) {
        int r = n % 10;
        sum += r * pow(2, i);
        n /= 10;
    }

    printf("%d\n", sum);
}