#include "simple_shell.h"

int main(void){
    char command[120];
    
    while(1){
        displayPrompt();
        read_user_command(command, sizeof(command));
        execute_command(command);
    }
    
    return 0;
}
