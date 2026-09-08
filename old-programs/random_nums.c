#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// This program is used to showcase the random numbers (psudeo random numbers)
// printf("%d \n", rand());
// printf("%d \n", RAND_MAX);

int main(int argc, char **argv)
{
    srand(time(NULL));

    int min = 50;
    int max = 100;

    int randomNum = (rand() % (max - min + 1)) + min;
    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2= (rand() % (max - min + 1)) + min;

    fprintf(stdout,"%d %d %d\n", randomNum, randomNum1, randomNum2);

    return 0;
}