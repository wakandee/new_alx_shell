#include "simple_shell.h"
#include <sys/wait.h> 

void execute_command(const char *command){
     /* Get the current environment variables */
     char **environment = get_environment();

     if (strcmp(command, "exit") == 0) {
        /*Exit the shell when the user enters the "exit" command */
        exit(EXIT_SUCCESS);
     } else if (strcmp(command, "env") == 0) {
          /* Print the environment when the user enters the "env" command*/
        print_environment(environment);
    } else {
     /* Execute the command */
          pid_t child_pid = fork();
          
          if(child_pid == -1){
               print_output("Error processing fork .\n");
               exit(EXIT_FAILURE);
          }else if(child_pid ==0){
               char *args[128];
               int arg_count = 0;

               char *token = strtok((char *)command, " ");
               while(token != NULL){
                    args[arg_count++] = token;
                    token= strtok(NULL, " ");
               }

               args[arg_count] = NULL;

               execve(args[0], args, environment);

               print_output("Error executing command.\n");
               exit(EXIT_FAILURE);
          }else{
               int status;
               wait(&status);
          }

     }           
}