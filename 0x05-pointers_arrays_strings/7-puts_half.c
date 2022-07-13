#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - the function that prints half of a given string
 * @str: pointer argument
 *
 * Return: always 0
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int half = length / 2;
	int i = length - 1;

	while (str[i] <= half)
	{
		i--;
		_putchar(str[i]);
		if (length % 2 != 0)
		{
			_putchar(str[length - 1]);
		}
	}
	_putchar('\n');
}
