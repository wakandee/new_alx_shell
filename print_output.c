#include "simple_shell.h"

void print_output(const char *message){
     write(STDOUT_FILENO, message, strlen(message));
}