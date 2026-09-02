#include <stdio.h>

int main(){

    float celsius = 0.f;
    float fahrenheit = 0.f;
    char choice = '\0';

    puts("\tTEMPERATURE CONVERTION PROGRAM");

    fprintf(stdout,"\nPlease choice one of the convertions:\n");
    puts("A: Celsius to fahrenheit");
    puts("B: fahrenheit to celsius");

    scanf(" %c", &choice);

    if(choice == 'A'){
        puts("Enter celsius values");
        fscanf(stdin,"%f", &celsius);
        fahrenheit = ((celsius * 9 / 5) + 32);
        printf("fahrenheit: %.2f \n", fahrenheit);
    }
    else if(choice == 'B'){
        puts("Enter fahrenhit to celsius");
        fscanf(stdin, "%f", &fahrenheit);
        celsius = ((fahrenheit - 32)* 5.0/ 9.0);
        printf("celsicus: %.2f\n", celsius);
    }
    else{
        fprintf(stderr,"Error: Invalid input please enter valid format\n");
    }
    
    return 0;
    
}


