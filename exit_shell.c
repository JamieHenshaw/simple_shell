#include "main.h"

/**
 * exit_shell - exists the shell
 *
 * @datash: data relevant for status and args
 * Return: 0 on success
 */

int exit_shell(data_shell *datash)
{
	int (*builtin)(data_shell *datash);

	if (datash->args[0] == NULL)
		return (1);
	builtin = get_builtin(datash->args[0]);

	if (builtin != NULL)
		return (builtin(datash));
	return (cmd_exec(datash));
}
