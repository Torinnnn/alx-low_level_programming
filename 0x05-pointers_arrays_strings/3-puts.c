# include "main.h"

/**
 * _puts - function to print out string
 * @str: pointer passed as parameter
 *
 * Return: always 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
