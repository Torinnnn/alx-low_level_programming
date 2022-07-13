#include "main.h"

/**
 * _strlen - function to return length of string
 * @s: the pointer passed as parameter
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s[i] != '\0')
	{
		i++;
	}

	return (i);
}
