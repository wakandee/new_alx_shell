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
void get_environment(void);
void print_environment(void);

#endif