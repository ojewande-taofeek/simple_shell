#include "main.h"

/**
 * put_err - The function prints error if command is invalid
 * @prog_name: The name of the programme
 * @cmd: The invalid command
 * Return: Nothing
 */

void put_err(char *prog_name, char *cmd)
{
	char *err_or = ": not found\n";

	write(STDERR_FILENO, prog_name, _strlen(prog_name));
	write(STDERR_FILENO, ": 1: ", 5);
	write(STDERR_FILENO, cmd, _strlen(cmd));
	write(STDERR_FILENO, err_or, _strlen(err_or));
	if (isatty(STDIN_FILENO == 0))
		exit(127);
}
