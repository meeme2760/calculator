#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time() to seed the random number generator

// Function to run the main game logic
int main(void)
{
    // --- 1. SETUP ---

    // Seeds the random number generator. This is a one-time setup
    // that uses the current time to ensure you get a different
    // sequence of random numbers every time the program runs.
    srand(time(NULL));

    // Generate the secret number between 1 and 100.
    // rand() % 100 gives a number from 0 to 99. Adding 1 shifts it to 1 to 100.
    int secretNumber = (rand() % 100) + 1;
    int guess = 0;
    int attempts = 0;

    printf("Welcome to the Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100. Can you guess it?\n");

    // --- 2. GAME LOOP (The 'while' loop) ---

    // The loop runs as long as the user's guess is NOT equal to the secret number.
    while (guess != secretNumber)
    {
        // Prompt for input
        printf("\nEnter your guess: ");

        // Read the user's guess
        // The '&' is essential here to store the input into the 'guess' variable's memory address.
        if (scanf("%d", &guess) != 1) {
            // Basic error handling for non-integer input
            printf("Invalid input. Please enter a number.\n");
            // Clear the input buffer to prevent an infinite loop
            while (getchar() != '\n');
            continue; // Skip the rest of the loop and start over
        }

        // Increment the attempt counter
        attempts++;

        // --- 3. CONDITIONAL LOGIC (The 'if/else if/else' statements) ---

        if (guess > secretNumber)
        {
            printf("Too high! Try a smaller number.");
        }
        else if (guess < secretNumber)
        {
            printf("Too low! Try a larger number.");
        }
        // The 'else' block only executes if the guess is NOT too high AND NOT too low,
        // which means it must be correct.
        else
        {
            printf("\n?? CONGRATULATIONS! You guessed the number %d!\n", secretNumber);
            printf("It took you %d attempts.\n", attempts);
        }
    }

    return 0;
}
