#include "main.h"

/**
 * check_quote - The function checks for double quote and parse command
 * @buffer: buffer for tokenization
 * @word: buffer for tokenized words
 * Return: tokenized words
 */


char **check_quote(char *buffer, char **word)
{
	char *buf_tok, *token, *e_qo, *delm = " \"\t\r\n";
	int idx = 0, j;

	buf_tok = _strdup(buffer);
	token = strtok(buf_tok, delm);
	while (token != NULL)
	{
		if (token[0] == '"')
		{
			e_qo = _strchr(token + 1, '"');
			if (e_qo != NULL)
			{
				*e_qo = '\0';
				word[idx] = _strdup(token + 1);
			}
			else
				word[idx] = _strdup(token);
		}
		else
			word[idx] = _strdup(token);
		if (word[idx] == NULL)
		{
			for (j = 0; j < idx; j++)
				free(word[j]);
			free(word);
			free(buf_tok);
			return (NULL);
		}
		idx++;
		token = strtok(NULL, delm);
	}
	word[idx] = NULL;
	return (word);
}
