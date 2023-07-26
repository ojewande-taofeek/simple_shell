#include "main.h"

/**
 * break_line - This function returns the tokenized words
 *              A NULL terminated array of pointers to strings
 * @buffer: The line of words read by getline
 * Return: words, an array of ponters of strings which contained each token
 *         NULL, if not successful
 */

char **break_line(char *buffer)
{
	char **word, *buf, *token = NULL, *delm = " \v\b\n\t\r";
	int count = 0, idx = 0, j;

	buf = _strdup(buffer);
	if (buf == NULL)
		return (NULL);
	token = strtok(buf, delm);
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, delm);
	}
	count++;
	word = malloc(sizeof(char *) * count);
	if (word == NULL)
	{
		free(buf);
		return (NULL);
	}
	token = strtok(buffer, delm);
	while (token != NULL)
	{
		word[idx] = _strdup(token);
		if (word[idx] == NULL)
		{
			for (j = 0; j < idx; j++)
				free(word[j]);
			free(word);
			free(buffer);
			free(buf);
			return (NULL);
		}
		idx++;
		token = strtok(NULL, delm);
	}
	word[idx] = NULL;
	free(buf);
	return (word);
}
