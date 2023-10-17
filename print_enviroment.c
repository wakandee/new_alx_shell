#include "simple_shell.h"

/* Function to print the environment */
void print_environment(char **environment) {
    while (*environment != NULL) {
        printf("%s\n", *environment);
        environment++;
    }
}       