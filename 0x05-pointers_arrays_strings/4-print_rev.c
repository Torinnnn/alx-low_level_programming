#include "main.h"
#include <stdio.h>
/**
 * print_rev - function to print out a string in reverse
 * @s: pointer parameter
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int f;/** forward*/
	int r;/** reverse*/

	for (f = 0; s[f] != '\0'; f++)
	{
	}
	for (r = f - 1; r >= s[f]; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');

}
