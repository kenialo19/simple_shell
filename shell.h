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
#include <errno.h>

extern char **environ;
char *msg;
int count;

typedef struct built
{
	char *vble;
	int (*b)();
} built_t;

/* PROTYPES FUNCTION_STRC */

int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strchr(char *s, char c);
int _strncmp(const char *str1, const char *str2, size_t n);
char *_strdup(const char *s);
char *_strcat(char *dest, char *src);
int count_word(char *str, char *delim);
char* itoa(int value, char* buffer, int base);

/* PROTYPES SHELL */

char *_getenv(const char *name);
char *read_line();
char **token_command(char *line);
int child_exec(char **arg, char *msg, int count);
char *builtin(char *cmd, char *dir);
char *_path_dir(char *cmd);

/* PROTOTYPES BUILTIN */

int _env(void);
int _dep_exit(void);
int (*_get_built(char *s))();

/* PROTYPES ERROR */
void _error(int no_error, char *msg, int count);

#endif /* _SHELL_H_*/
