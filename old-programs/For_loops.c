#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  //<windows>
// Repeat some code a limited number of times
// for (Initialization ; condition; update)
// for (int i = 0; i <= 10; i++) (i++ increment, i-- decrement) i+=2 or i -= 2

int main(){
    for (int i = 10; i >= 1; i--){
        sleep(1);  // in windows milisec === 1000 | Linux/Mac secs
        printf("%d\n",i);
    }
    puts("Happy New Year");

    return EXIT_SUCCESS;
}