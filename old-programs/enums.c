#include <stdio.h>

/*typedef enum {
    SUNDAY = 2, MONDAY = 4, TUESDAY = 6, WEDNESDAY = 8, THRUSDAY = 10, FRIDAY = 12, SATURDAY = 14
}Day;
*/

typedef enum {
    SUCCESS = 1, FAILURE = 2, PENDING = 3 
}Status;
void connectStatus(Status status);

int main(){

    /*Day today = 8;

    if (today == SUNDAY || today == SATURDAY){
        printf("It's the weekend\n");
    }
    else{
        printf("It's a weekday\n");
    }*/

    Status status = PENDING;

    //printf("%d\n", status);

    connectStatus(status);


    return 0;
}

void connectStatus(Status status){

    switch(status){
        case SUCCESS:
            printf("Connection was Successfull\n");
            break;
        case FAILURE:
            printf("Could not connect\n");
            break;
        case PENDING:
            printf("Connecting.....\n");    

    }
}