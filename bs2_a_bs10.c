#include <stdio.h>

int pow(int n, int e) {
    int res = 1;

	for (int i = 0; i < e; i++) {
		res *= n;
	}

    return res;
}

int main() {
    int v;

    do {
        printf("Inserisci il numero di cifre del numero in base 2\n");
        scanf("%d", &v);
    } while (v <= 0);

    int sum = 0;

    for (int i = 0; i < v; i++) {
        int n;

        printf("Inserisci la cifra in posizione n. %d\n", i);
        scanf("%d", &n);

        sum += n * pow(2, i);
    }

    printf("%d\n", sum);
}