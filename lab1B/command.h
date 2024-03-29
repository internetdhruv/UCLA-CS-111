// NAME: Dhruv Sharma
// EMAIL: dhruvsharma78@ucla.edu
// ID: 605082988

#ifndef COMMAND_H
#define COMMAND_H

#include <sys/types.h>

typedef struct {
  int fdTable[3];
  int numArguments;
  pid_t processID;
  char* processName;
  char** arguments;
} simpsh_command_t;

simpsh_command_t* SIMPSH_COMMAND_T_INIT();
void SIMPSH_COMMAND_T_DESTROY(simpsh_command_t*);
void addArgument(simpsh_command_t* cmd, char* arg);

#endif
