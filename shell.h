#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stddef.h>
#include <string.h>

extern char **environ;

/* PROTYPES FUNCTION_STRC */
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int count_word(char *str);
char *read_line(void);
char **token_command(char *line);

#endif /* _SHELL_H_*/
