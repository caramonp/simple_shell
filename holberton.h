#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

extern char **environ;

int main(void);
int strcopy(char *str1, char *str2, size_t t);
int _pstring(char *str);
int _strcmp(char *s1, char *s2);
char **tokenize(char *str);
int _strlen(char *str);
unsigned int num_tokens(char *tok);
void free_memory(char **mem);
int _fork(char **comm);
int _strcmp(char *str1, char *str2);
void exe_path(char **argv, char **environ);
char *tokenize_env(char *comando, char **environ);
char *_strcat(char *dest, char *src);
int _strncmp(const char *s1, const char *s2, size_t n);
void env_command(char *buffer, char **argv, char **environ);
int fork_fail(void);
void _forkexe(char *buffer, char **argv, char **environ);
void _forkwait(char *buffer, char **argv);
void end_of_line(char *buffer, char **argv);
char *_strdup(char *str1);
char *_strcpy(char *dest, char *src);

#endif
