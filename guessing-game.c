#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretnum = 7;
    int guess = 0; // Initialized to 0 to prevent garbage memory bugs
    int guesscount = 0;
    int guesslimit = 5;
    int outofguesses = 0;

    while (guess != secretnum && outofguesses == 0){

        if(guesscount < guesslimit){
            printf("Enter a Number: ");
            scanf("%d", &guess);
            guesscount++;
        } else {
            outofguesses = 1;
        }

    }

    switch(outofguesses){
        case 0 :
            printf("You Win!!!\n");
            break;
        default :
            printf("You Lose...:(\n");
            break;
        }

    return 0;
}
