#include "main.h"

/**
 * executor - The fucntion exectes the parsed input
 * @argv: A NULL terminated array of pointers to string
 * @prog_name: The name of the programme
 * @full_path: The current PATH
 * Return: Nothing
 */

void executor(char **argv, char *prog_name, char *full_path)
{
	char **env = environ;

	if (argv)
	{

		if (execve(full_path, argv, env) == -1)
		{
			perror(prog_name);
			_exit(2);
		}
	}
}
