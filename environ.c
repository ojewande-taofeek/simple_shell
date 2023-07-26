#include "main.h"

/**
 * _getenv - The function returns all paths
 * @env: The current environment variables
 * @name: The variable key
 * Return: PATH, if successful
 *         NULL, if otherwise
 */

char *_getenv(char **env, char *name)
{
	int idx = 0, n;

	n = _strlen(name);
	while (env[idx] != NULL)
	{
		if (_strncmp(env[idx], name, n) == 0)
			return (env[idx] + (n + 1));
		idx++;
	}
	return (NULL);
}
