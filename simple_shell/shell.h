#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

#define DELIM " \t\n"
extern char **environ;

char *read_line(void);
char **tokenizer(char *line);
void freearray2D(char **arr);
int _execute(char **command, char **argv, int idx);
char *_getenv(char *variable);
char *_getpath(char *command);
char *_itoa(int n);
void printerror(char *name, char *cmd, int idx);
void reverse_string(char *str, int len);

int is_builtin(char *command);
void handle_builtin(char **command , char **argv , int *status , int idx);
void print_env(char **command , int *status);
void exit_shell(char **command, char **argv, int *status , int idx);

int is_positive_number (char *str);
int _atoi(char *str);

char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

#endif
