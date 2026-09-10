#include <stdio.h>

//Temperature convertion program 

int main(){

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature conversion program\n");

    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if (choice == 'C'){
        // C to F
        printf("Enter the temperature to celsius: \n");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;  // c to f
        printf("%.1f Celsius is equal to %.1f fahrenheit\n", celsius, fahrenheit);
    }
    else if(choice == 'F'){
        // F to C
        printf("Enter the temperature to fahrenheit: \n");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f fahrenheit is equal to %.1f celsius\n", fahrenheit ,celsius);
    }
    else{
        printf("Invalid choice! Please select C or F\n");
    }

    return 0;
}