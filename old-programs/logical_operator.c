#include <stdio.h>
#include <stdbool.h>

// logical operators 

//&& = AND  ====> TO excute both condition to be true eg(temp > 0 && temp < 30)
//|| = OR   ====> TO excute one condition must be true eg(temp <= 0 || temp >= 30)
// ! = NOT  ====> It will reverse the boolin operation (do the opposite)

int main(){

    bool sunny = true;

    if (!sunny){
        printf("It is SUNNY outside\n");
    }
    else {
        printf("It is CLOUDY outside\n");
    }

    return 0;
}