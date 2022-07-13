#include "main.h"
#include <stdio.h>

/**
 * puts_half - the function that prints half of a given string
 * @str: pointer argument
 *
 * Return: void
 */
void puts_half(char *str)
{
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	y = (x + 1) / 2;
	for (x = y; str[x]; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
