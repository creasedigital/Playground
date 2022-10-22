#include <stdio.h>
#include <stdlib.h>

int main()

{
    int secretNumber = 5;
    int guess;

    while(guess != secretNumber)
    {
        printf("Enter the secret number: ");
        scanf("%d", &guess);
        if(guess != secretNumber)
            printf("please try again\n");
        else
            return printf("Your guess was as good as mine!");
    }


    return (0);
}

