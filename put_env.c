#include "main.h"

/**
 * put_env - The function prints the current environment
 * @env: An array of pointers to string of the environment variables
 * Return: Always nothing
 */

bool put_env(char **env)
{
	int idx = 0, len;

	while (env[idx] != NULL)
	{
		len = 0;
		while (env[idx][len] != '\0')
			len++;

		write(STDOUT_FILENO, env[idx], len);
		put_char('\n');
		idx++;
	}
	return (true);
}
