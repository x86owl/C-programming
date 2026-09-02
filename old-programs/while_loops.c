#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// This program is used to showcase the while loops program
// while do something as long as the condition is true | condition must be true in order to run program.

int do_while_loop(int *number) {
    do {
        puts("Enter a number greater than zero: ");
        fscanf(stdin,"%d3s", &number);
        fprintf(stdout,"You enter the number %d\n", number);
    } while(number <= 0);


}

void print_name(){
    
    char name[20] = "";
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
    fprintf(stdout, "Hello %s\n", name);
}

void game() {
    int number = 0;
    bool isRunnig = true;
    char response = '\0';

    while (isRunnig) {
        puts("You are playing a game.");
        puts("would you like to conitue? (Y = yes, N = No)");
        fscanf(stdin, "%c", & response);

        if (response != 'Y' && response != 'y') {
            isRunnig = false;
        }
        else{
            do_while_loop(&number);
        }
    }
    puts("You exit the game");
}

int main(int argc, char **agrv){
    print_name();

    game();

    return EXIT_SUCCESS;
}