#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("\tWEIGHT CONVERSION PROGRAM\n\t-------------------------\n1. KG to Pounds\n2. Pounds to KG\nEnter your choice [1 or 2]: ");
    fscanf(stdin,"%d", &choice);

    if (choice == 1){
        puts("Enter the weight in kilograms: ");
        fscanf(stdin,"%f", &kilograms);
        pounds =  kilograms * 2.20462;
        printf("%.2f kilograms is equal to %2.f pounds\n", kilograms,pounds);
    }
    else if (choice == 2){
        puts("Enter th weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %2.f kilograms\n", pounds, kilograms);

    }
    else{
        fprintf(stderr,"\nERROR: Invalid choice! Please enter 1 or 2\n");
    }
    
    return 0;
}