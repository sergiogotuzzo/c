#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned) time(NULL));

    int n = rand() % 100 + 1, guess, attempts = 0;

    do {
        printf("Guess the number\n");
        scanf("%d", &guess);

        if (guess < n) {
            printf("Too low!\n");
        } else if (guess > n) {
            printf("Too high!\n");
        }

        attempts++;
    } while (n != guess);

    printf("You guessed in %d attempt(s)!\n", attempts);

    return 0;
}