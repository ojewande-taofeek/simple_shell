#include "main.h"

/**
 * inter_rupt - The function exit the shell if CNTL + D
 * @buffer: The input from getline
 * @argv: An array of parsed string
 * Return: Nothing
 */

bool inter_rupt(char **argv, char *buffer)
{
	int i;

	if (isatty(STDIN_FILENO) == 1)
		put_char('\n');
	if (argv != NULL)
	{
		for (i = 0; argv && argv[i]; i++)
			free(argv[i]);
		free(argv);
	}
	free(buffer);
return (true);
}
