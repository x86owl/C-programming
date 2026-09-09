#include <stdio.h>
#include <stdbool.h>
// This program is used to showcase the return statement

//int qube(int nums){
 //   return nums * nums * nums;

bool agecheck(int age){
    if (age >=18){
        return true;
    }
    else{
        return false;
    }
}

int getmax(int x, int y){
    
    if (x >= y){
        return x;
    }
    else{
        return y;
    }
}

int main(){
    /*
    int x = qube(4);
    int y = qube(5);
    int z = qube(6);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z); */

    int age = 17;
    int max = getmax(6, 4);
    printf("%d", max);
    
    if (agecheck(age)){
        printf("\nYou can sign up\n");
    }
    else{
        printf("\nYou must be 18+ to sign up\n");
    }



    return 0;
}