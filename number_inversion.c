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
        printf("Enter the number\n");
        scanf("%d", &n);
    } while (n <= 0);

    int values = 0, tmp = n;

    while (tmp > 0) {
        tmp /= 10;

        values++;
    }

    int i = 1, pow10 = pow(10, values - i), sum = 0, r = 0;

    while (i <= values) {
        r = n % 10;
        sum += r * pow10;
        i++;
        pow10 = pow(10, values - i);
        n /= 10;
    }

    printf("%d\n", sum);
}