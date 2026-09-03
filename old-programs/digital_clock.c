#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main(){

    // DIGITAL CLOCK
    // %ld (It means long decimal)
    // -> Deferencing
    // printf("%ld\n", rawtime);
    //unistd means unique standard (it also provide the sleep function)
    //if we on windows we need windows.h 
    // then sleep fuction specify in milisec 1000 = 1min

    time_t rawtime = 0;  //jan 1 1970 (Epoch) reference point
    struct tm *pTime = NULL; // tm means time. pointer the *pTime variable
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning){

        time(&rawtime);

        pTime = localtime(&rawtime); //pass by reference ratherthan pass by value

        printf("\rCurrent Time: %02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec); //(*pTime).tm_hour

        fflush(stdout);

        sleep(1);
    }


    return 0;
}
