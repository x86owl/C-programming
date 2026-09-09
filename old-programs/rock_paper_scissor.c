#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// This program is used to showcase the ROCK PAPER SCISSORS

int getComputerChoice();
int getUserChoice();
void checkWinner(int UserChoice, int ComputerChoice);

int main(){

    srand(time(NULL));

    printf("*** ROCK PAPER SCISSORS ***\n");

    int UserChoice = getUserChoice();
    int ComputerChoice = getComputerChoice();

    printf("%d\n", UserChoice);
    printf("%d\n", ComputerChoice);

    switch(UserChoice){
        case 1:
            printf("You chose ROCK\n");
            break;
        case 2:
            printf("You chose PAPER\n");
            break;
        case 3:
            printf("You chose SCISSORS\n");
            break;

    }
    switch(ComputerChoice){
        case 1:
            printf("Computer chose ROCK\n");
            break;
        case 2:
            printf("Computer chose PAPER\n");
            break;
        case 3:
            printf("Computer chose SCISSORS\n");
            break;

    }

    checkWinner(UserChoice, ComputerChoice);

    return 0;
}

int getComputerChoice(){

    return (rand() % 3) + 1;
}
int getUserChoice(){

    int choice = 0;

    do{
        printf("Choose an option\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    }while (choice < 1 || choice > 3);

    return choice;
}
void checkWinner(int UserChoice, int ComputerChoice){

    if(UserChoice == ComputerChoice){
        printf("It's a TIE!\n");    
    }
    else if(UserChoice == 1 && ComputerChoice == 3){
        printf("You WIN!\n");
    }
    else if(UserChoice == 2 && ComputerChoice == 1){
        printf("You WIN!\n");
    }
    else if(UserChoice == 3 && ComputerChoice == 2){
        printf("You WIN!\n");
    }
    else{
        printf("You LOSE!\n");
    }
}