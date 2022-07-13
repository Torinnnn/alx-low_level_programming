#include "main.h"

/**
 * print_rev - function to print out a string in reverse
 * @s: pointer parameter
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	if (s[i] != '\0')
	{print_rev(s + 1);
		printf("%c", s[i]);
	}
	return (0);
}
