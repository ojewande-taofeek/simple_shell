#include "main.h"

/**
 * * _strlen - The function returns the length of a string
 * @s: The pointer of the formal paramter of string constant
 * Return: the lenght of the string constant
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}


/**
 * _strcpy - The function copies the string pointed to by src
 *           including the terminating null byte (\0)
 *           , to the buffer pointed to by dest
 * @src: The string to copy from
 * @dest: The string to copy to
 * Return: the destinaton string
 */

char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	while (src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}


/**
 * _strcat - The function concantenates two strings
 * @dest: The formal parameter of the string constant to copy to
 * @src: The formal parameter of the string constant to copy from
 * Return: The dest string
 */

char *_strcat(char *dest, char *src)
{
	int len, idx;

	for (len = 0; dest[len]; len++)
		;
	idx = 0;
	while (src[idx])
	{
		dest[len] = src[idx];
		len++;
		idx++;
	}
	dest[len] = '\0';
	return (dest);
}

/**
 * _strcmp - The function comapares two strings
 * @s1: The formal parameter for string 1
 * @s2: The formal parameter for string 2
 * Return: the diff
 */

int _strcmp(char *s1, char *s2)
{
	int idx = 0, diff;

	while (s1[idx] || s2[idx])
	{
		diff = s1[idx] - s2[idx];
		if ((s1[idx] > s2[idx]) || (s1[idx] < s2[idx]))
			break;
		idx++;
	}
	return (diff);
}


/**
 * _strncmp - The function comapares two strings
 * @s1: The formal parameter for string 1
 * @s2: The formal parameter for string 2
 * @n: The number of characters to be compared
 * Return: the diff
 */

int _strncmp(char *s1, char *s2, int n)
{
	int idx = 0, diff;

	while ((s1[idx] || s2[idx]) && (idx < n))
	{
		diff = s1[idx] - s2[idx];
		if ((s1[idx] > s2[idx]) || (s1[idx] < s2[idx]))
			break;
		idx++;
	}
	return (diff);
}
