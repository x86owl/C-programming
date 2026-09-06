#include <stdio.h>
#include <string.h>

// This program is used to showcase the fuction 
//

void happybirthday(char name[], int age ){

    printf("Happy birthday to you!\n");
    printf("Happy birthday to you!\n");
    printf("Happy birthday dear %s!\n", name);
    printf("Happy birthday to you!\n");
    printf("You are %d years old\n", age);
}

int main(){

    char name[15] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n");
    happybirthday(name, age);

    return 0;
}