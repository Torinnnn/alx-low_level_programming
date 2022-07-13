# include "main.h"

/**
 * _puts - function to print out string
 * @str: pointer passed as parameter
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (char *str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
