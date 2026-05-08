/*

?? Welcome to Number Guessing Game!
Guess the number between 1 and 100
You have 5 attempts.

Enter your guess: 50
?? Too High!
Attempts left: 4

Enter your guess: 25
?? Too Low!
Attempts left: 3

Enter your guess: 37
?? Correct! You guessed the number!
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;
    int attempts = 5;   // limited attempts

    // generate random number
    srand(time(0));
    secret = (rand() % 100) + 1;

    printf("?? Welcome to Number Guessing Game!\n");
    printf("Guess the number between 1 and 100\n");
    printf("You have %d attempts.\n\n", attempts);

    while(attempts > 0) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess == secret) {
            printf("?? Correct! You guessed the number!\n");
            return 0;
        }
        else if(guess > secret) {
            printf("?? Too High!\n");
        }
        else {
            printf("?? Too Low!\n");
        }

        attempts--;
        printf("Attempts left: %d\n\n", attempts);
    }

    printf("? Game Over! The correct number was %d\n", secret);

    return 0;
}
