#include "simple_shell.h"

char** get_environment() {
    extern char **environ;
    return environ;
}