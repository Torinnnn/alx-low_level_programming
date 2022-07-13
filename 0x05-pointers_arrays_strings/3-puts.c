# include "main.h"

/**
 * _puts - function to print out string
 * @str: pointer passed as parameter
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i = 0;
		_putchar(str[i]);
	}
	i++;
	_putchar('\n');
	Return 0;
}
