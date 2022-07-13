#include "main.h"
#include <stdio.h>

/**
 * puts_half - the function that prints half of a given string
 * @str: pointer argument
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int half = length / 2;
	int i;

	while (str[i] <= half)
	{
		i = length - 1;
		i--;
		_putchar(str[i]);
		if (length % 2 != 0)
		{
			_putchar(str[length - 1]);
		}
	}
	_putchar('\n');
}
