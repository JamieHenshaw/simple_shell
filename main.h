#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <limits.h>

#define UNUSED(x) (void)(x)

/**
 * struct data_shell - Data structure to hold shell-related information.
 * @args: An array of strings representing command-line arguments.
 * @av: An array of strings representing program-related arguments.
 * @_environ: An array of strings representing the environment variables.
 * @status: An integer representing the exit status of the last command.
 * @counter: An integer counter for keeping track of commands executed.
 *
 * This structure is used to store various pieces of information,
 * related to the shell,
 * such as command-line arguments,
 * environment variables, exit status, and command counters.
 */

typedef struct data_shell

{
	char **args; /*Array of command arguents*/
	char **_environ; /* Array of environment variables*/
	char **av; /* Array of arguments*/
	int status; /*Exit status*/
	int counter; /*Command counter*/
} data_shell;

/*Function prototypes*/

char **_strtok(char *str, const char *delim);
void get_error(data_shell *datash, int code);
int _atoi(const char *s);
int _isdigit(const char *s);
int _strcmp(const char *s1, const char *s2);
int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
void rev_string(char *s);
void cd_dot(data_shell *datash);
void cd_to(data_shell *datash);
void cd_previous(data_shell *datash);
void cd_to_home(data_shell *datash);
int cd_shell(data_shell *datash);
int cmd_exec(data_shell *datash);
int exec_line(data_shell *datash);
int exit_shell(data_shell *datash);
void set_env(char *name, char *value, data_shell *datash);
int _setenv(data_shell *datash);
int _unsetenv(data_shell *datash);
int cmp_env_name(const char *nenv, const char *name);
char *_getenv(const char *name, char **_environ);
char *copy_info(char *name, char *value);

#endif

