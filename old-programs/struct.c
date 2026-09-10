#include <stdio.h>
#include <string.h>

enum levels{
    LOW = 1,
    MEDIUM,
    HIGH
};

int main(){

    enum levels MyData = MEDIUM;

    switch(MyData){
        case 1:
            printf("Low level\n");
            break;
        case 2:
            printf("Medium level\n");
            break;
        case 3:
            printf("High level\n");
            break;
    }

    return 0;

}