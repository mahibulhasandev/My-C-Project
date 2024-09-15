#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){
    int random, guess;
    int no_of_guess =0;
    srand(time(NULL));

    printf("Welcome to the world of Guessing Numbers\n");
    random = rand() % 100 + 1; //Generating Between 0 to 100
    // printf("Generating random number: %d", random); //check Generating numbers
    do {
        printf("\nPlease enter Your Guess Between(1 to 100): ");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random) {
            printf("Guess a larger number. \n");
        } else if (guess > random){
            printf("Guess a smaller number. \n");
        } else {
            printf("Congratulation !!! You have Successfully guessed \nThe number in %d attempts", no_of_guess);
        }
    
    } while (guess != random);

    printf("\nBye Bye, Thanks for playing");
    printf("\nDeveloped by: Mahibul_Hasan");
    return 0;
}