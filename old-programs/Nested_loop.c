#include <stdio.h>
#include <stdlib.h>

// This program is used to showcase the work of Nested loop

void nested_loop()
{
    for (int a = 1; a < 4; a ++){
        for(int i = 1; i < 10; i++){
            printf("%d ", i);
        }
        printf("\n");
    }

    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <=10; j++){
            printf("%4d ", i * j);
        }
        printf("\n");
    }
}

void rows_cols()
{
    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the # of rows: ");
    scanf("%d", &rows);

    printf("Enter the # of columns: ");
    scanf("%d", &columns);
    
    printf("Enter the # of symbol: ");
    scanf(" %c", &symbol);

    for(int a = 0; a < rows; a++ ){
           for (int i = 0; i < columns; i++){
        printf("%c", symbol);
    }
    printf("\n");
    }
}

int main(int argc, char **argv)
{
   nested_loop();

    return 0;
}