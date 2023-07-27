#ifndef MAIN_H
#define MAIN_H

/* HEADERS */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <stdbool.h>

/* HANDLE_SIGNAL */
void sigint_handler(int sig_int);
/* _EXIT */
bool exit_op(char  **argv);
/* INTERRUPT */
bool inter_rupt(char **argv, char *buffer);
/* WHITESPACE */
size_t white_space(char **argv, char *t_buf);
char **check_quote(char *buffer, char **word);
extern char **environ;
/* PUT_ERR */
void put_err(char *prog_name, char *cmd);

/* HELPERS FILE PROTOTYPES */
int put_char(char c);
void put_prompt(void);
char *_strdup(char *str);

/* PARSER PROTOTYPE */
char **break_line(char *buf_tok);

/* EXE PROTOTYPE */


/* PATH_FINDER PROTOTYPE */
char *_path(char *file_name, char *all_path);
/* ENVIRON PROTOTYPE */
char *_getenv(char **env, char *name);
/* PUT_ENV PROTOTYPE */
bool put_env(char **env);
/* FORK_CALLER PROTOTYPE */
void call_fork(char **argv, char *prog_name, char *full_path, char **env);
/* STRINGS PROTOTYPES */
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, int n);
char *_strchr(char *s, char c);



#endif /* MAIN_H */
