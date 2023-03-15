#ifndef __STRTOW__H
#define __STRTOW__H

#include <stdlib.h>
#define BUFFER 67000

int is_seperator(char c);
int _strlen(char *str);
char *strtok(char *str, char *seperator);
char **strtow(char *str);
#endif
