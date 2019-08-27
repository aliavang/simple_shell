#ifndef SHELLBACCA_H
#define SHELLBACCA_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int tokcount(char *s, const char *delim);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *_strcat(char *dest, char *src);
int _putchar(char c);
char **strtokenizer(char *s, const char *delim);

#endif /*SHELLBACCA_H*/
