#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {
    /* Print Version and Exit information */
    puts("Mallow Version 0.0.0.0.1");
    puts("Welcome, traveller");
    puts("Press Ctrl+c to Exit\n");
    /* Loop until keyboard interrupt */
    while(1) {
        /* Output prompt and get input */
        char* input = readline("mallow> ");

        /* Add input to history */
        add_history(input);

        /* Print input back to user */
        printf("No you're a %s\n", input);

        /* Free retrieved input */
        free(input);
    }
    return 0;
}
