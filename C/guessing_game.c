#include <stdio.h>
#include <stdlib.h>

int main(){

    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0) {
        if(guessCount < guessLimit){
            printf("Enter the secret number: ");
            scanf("%d", &guess);
            guessCount++;
            } else {
                outOfGuesses = 1;
            }
    }
     if(outOfGuesses == 1){
        printf("you ran out of guesses\n");
    } else {
        printf("Your guess was as good as mine!");
        }




    return (0);
}

