#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned) time(NULL));

    int n = rand() % 100 + 1;
    int guess, attempts = 0;

    printf("I'm thinking of a number between 1 and 100.\nTry to guess it!\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 100) {
            printf("Please enter a number between 1 and 100.\n");
            continue;
        }

        attempts++;

        if (guess < n) {
            printf("Too low!\n");
        } else if (guess > n) {
            printf("Too high!\n");
        }
    } while (guess != n);

    printf("🎉 You guessed it in %d attempt(s)!\n", attempts);

    if (attempts <= 5)
        printf("Excellent!\n");
    else if (attempts <= 10)
        printf("Good job!\n");
    else
        printf("You can do even better next time!\n");

    return 0;
}
