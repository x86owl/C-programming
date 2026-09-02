#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// tenary operator ?= alias for the if-else statements
// (condition) ? value_if_false : value_if _true;

void maximum()
{
    int x = 10;
    int y = 7;
    int max = (x < y) ? y : x;
    fprintf(stdout, "%d is the maximum number.\n", max);
}

void online_program() 
{
    bool is_online = true;
    fprintf(stdout,"%s\n", (is_online) ? "The perosn is online" : "The person is offline");
}

void odd_even()
{
    int number = 7;
    fprintf(stdout,"%d is %s\n", number, (number % 2== 0) ? "Even number." : "Odd number.");
}

void ages() 
{
    int age = 12;
    fprintf(stdout, "The person is %s\n", (age > 18) ? "Adult" : "Teen");
}

int main(int argc, char *argv[])
{
    int hours = 13;
    int minutes = 8;
    char *meridiem = (hours < 12) ? "AM": "PM";
    //printf("%02d:%02d %s\n", hours,minutes, (hours < 12) ? "AM":"PM");

    printf("%02d:%02d %s\n", hours,minutes, meridiem);

    return 0;
}