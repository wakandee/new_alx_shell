#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void displayPrompt();
void print_output(const char *message);
void read_user_command(char *command, size_t size);
void execute_command(const char *command);
char** get_environment();
void print_environment(const char **environment);

#endif