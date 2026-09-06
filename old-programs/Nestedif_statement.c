#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.00;
    bool isStudent = false; // false 10%
    bool isSeniour = true;

    // student = $9
    // seniour = $8
    // student + seniour = $7

    if(isStudent){
        if(isSeniour){
           printf("You get a student discount of 10%% \n"); 
           printf("You get a seniour discount of 20%% \n");
           price *= 0.7; 
        }
        else {
            printf("You get a student discount of 10%% \n");
            price = price * 0.9;  // price *= 0.9
        }
    }
    else{
        if(isSeniour){
        printf("You get a seniour discount of 20%% \n");
        price *= 0.8;
        }
    }
 
    printf("The price of a ticket is: $%.2f\n", price);

    return 0;
}