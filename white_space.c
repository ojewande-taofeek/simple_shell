#include "main.h"

/**
 * white_space - The function eliminates whitespace
 * @t_buf: The buffer
 * @argv: An array of parsed string
 * Return: Len
 */

size_t white_space(char **argv, char *t_buf)
{
	size_t len;
	int i;

	while (*t_buf && (*t_buf == ' ' || *t_buf == '\t' ||
				*t_buf == '"'))
		t_buf++;
	len = _strlen(t_buf);
	while (len > 0 && (t_buf[len - 1] == ' ' || t_buf[len - 1] == '"' ||
				t_buf[len - 1] == '\t' || t_buf[len - 1] == '\n'))
	{
		t_buf[len - 1] = '\0';
		len--;
	}
	if (argv != NULL)
	{
		for (i = 0; argv && argv[i]; i++)
			free(argv[i]);
		free(argv);
	}
	return (len);
}
