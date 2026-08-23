#include <stdio.h>
#include <stdlib.h>

int global_var = 100;   // Accessible everywhere in this file

int main(void) {
    int outer_var = 10;

    fprintf(stdout,"Global var: %d\n", global_var);
    fprintf(stdout,"Outer var: %d\n", outer_var);

    {
        // Outer var is shadowed inside this inner block 
        int outer_var = 99;
        int inner_var = 20;

        fprintf(stdout,"Inside block - Outer var (shadowed): %d\n", outer_var);
        fprintf(stdout,"Inside block - Inner var:            %d\n", inner_var);
    }

    // Inner_var is no longer accssible here
    fprintf(stdout,"Outside block - Outer var restored: %d\n", outer_var);

    return EXIT_SUCCESS;
}
