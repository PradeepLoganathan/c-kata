#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess;
    int attempts = 0;
    const int MAX_RANGE = 100;

    // Initialize random number generator
    srand((unsigned) time(NULL));

    // Generate random number between 1 and MAX_RANGE
    randomNumber = rand() % MAX_RANGE + 1;

    printf("Guess the Number Game\n");
    printf("I have chosen a number between 1 and %d. Try to guess it!\n", MAX_RANGE);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts!\n", attempts);
        }
    } while (guess != randomNumber);

    return 0;
}
