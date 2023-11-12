#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game(int guess, int result);
void print(int guess, int result, int guesses);
int main()
{
    const int min = 1;
    const int max = 50;
    int guess, guesses = 0, result;

    srand(time(0));

    result = (rand() % max) + min;
    do
    {
        printf("\nGuess the number between %d - %d: ", min, max);
        scanf("%d", &guess);

        game(guess, result);
        guesses++;
    } while (guess != result);

    print(guess, result, guesses);
    
    return 0;
}

// game conditions
void game(int guess, int result)
{
    if (guess > result)
    {
        printf("Too high!\n");
    }
    else if (guess < result)
    {
        printf("Too low\n");
    }
    else
    {
        printf("Correct guess!!\n");
    }
}

// printing function
void print(int guess, int result, int guesses)
{
    printf("_____________________________\n");
    printf("\n");
    printf("Guessed Number: %d\n", guess);
    printf("Result Number: %d\n", result);
    printf("Total Guesses: %d", guesses);
    printf("\n");
    printf("_____________________________\n");
    printf("Thank you for playing!!\n");
    printf("\n");
}