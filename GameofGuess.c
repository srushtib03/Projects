#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));
    
    printf("WELCOME!!");
    printf("Let's Start the game of Guessing Numbers!\n");
    random = rand() % 100 + 1;

    do{
        printf("Please enter your guess(1-100)\n");
        scanf("%d",&guess);
        no_of_guess++;

        if(guess<random){
            printf("Guess Larger number\n");
        }
        else if(guess>random){
        printf("Guess Smaller number\n");
        }
        else{
            printf("Congrats!!You have successfully guessed the number in %d attempts\n",no_of_guess);
        }

        
    } while(guess != random);

    printf("Thanks for Playing\n");

    return 0;
}
