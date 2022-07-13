# include "main.h"
# include <stdio.h>

/**
 * _puts - function to print out string
 * @str: pointer passed as parameter
 *
 * Return: void
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
