#include "main.h"

/**
 * puts2 - function to print every other character of a string
 * @str: pointer argument
 *
 * Return: takes index
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i = i + 2;
		_putchar(str[i]);
	}
	_putchar('\n');
}
