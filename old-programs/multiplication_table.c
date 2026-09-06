#include <stdio.h>

int main(){

    for(int number = 2; number <= 5; number++){
        for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", number, i, number * i);
    }
    printf("\n");
    }
    
    return 0;
}