#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    FILE *pFile = fopen("/home/lenovo/nasm notes","r"); // relational & absolute file path 
    char buffer[1024] = {0};

    if(pFile == NULL){
        printf("Could not open the file\n");
        return -1;
    }

    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }

    puts("program run successfully");

    fclose(pFile);
    
    return 0;
}