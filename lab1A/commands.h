// NAME: Dhruv Sharma
// EMAIL: dhruvsharma78@ucla.edu
// ID: 605082988

#ifndef COMMANDS_H
#define COMMANDS_H

#include "command.h"
#include <sys/types.h>

typedef struct {
  int num;
  simpsh_command_t** commandList;
} simpsh_commands_t;

simpsh_commands_t* SIMPSH_COMMANDS_T_INIT();
void SIMPSH_COMMANDS_T_DESTROY(simpsh_commands_t*);
void addCommand(simpsh_commands_t*, simpsh_command_t*);
char* getCommandExitString(simpsh_commands_t*, pid_t, char*);

#endif
