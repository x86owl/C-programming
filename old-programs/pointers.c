#include <stdio.h>
// * dereference operator

void birthday(int* age);

int main(){

    int age = 22;
    //int *pAge = &age;

    //printf("%p\n", &age);
    //printf("%p\n", pAge);

    birthday(&age);
    printf("You are %d years old\n", age);

    return 0;
}

void birthday(int* age){
    // pass by value or pass by reference
    (*age)++;
}