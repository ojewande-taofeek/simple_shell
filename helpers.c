#include "main.h"

/**
 * put_char - The function that prints character
 * @c: The character to be printed
 * Return: The printed character
 */

int put_char(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}


/**
 * put_prompt - The function that prints prompt
 * Return: Always nothing
 */

void put_prompt(void)
{
	char *prompt = "$ ";
	int idx = 0;

	while (prompt[idx])
	{
		put_char(prompt[idx]);
		idx++;
	}
}


/**
 * _strdup - The function returns a pointer to a newly allocated space in
 *           memory, which conatins a copy of the string given as a parameter
 * @str: The string constant formal parameter
 * Return: A pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int idx = 0, len = 0;
	char *dup = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dup = malloc((len + 1) * sizeof(char));
	if (dup != NULL)
	{
		for (idx = 0; idx <= len; idx++)
			dup[idx] = str[idx];
	}
	else
		dup = NULL;
	return (dup);
}

/**
 * _strchr - Funtion that looks for a character in a string
 * @s: a pointer to string
 * @c: a character
 * Return: The string after where the character is found
 */

char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			return (NULL);
		s++;
	}
}
