#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//This program is used to showcase the circle calculator program with c

int main() {
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;  // Use capital letters variable name when you use constat
    
    printf("Enter the radius: ");
    fscanf(stdin,"%lf", &radius);

    area = PI * pow(radius,2);  // PI * radius * radius
    printf("Area: %.2lfcm\n", area);

    surfaceArea = 4 * PI * pow(radius,2);
    printf("surfaceArea: %.2lfcm\n", surfaceArea);

    volume = (4.0 / 3.0) * PI * pow(radius,3);
    printf("volume: %.2lf\n", volume);

    return EXIT_SUCCESS;
}