#include <stdio.h>

/* Declare a buffer for user input */
static char input[2048];

int main(int argc, char** argv) {
    /* Print Version and Exit information */
    puts("Lipsy Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");
    /* Loop until keyboard interrupt */
    while(1) {
        fputs("lispy> ", stdout);
        fgets(input, 2048, stdin);
        printf("No you're a %s", input);
    }
    return 0;
}
