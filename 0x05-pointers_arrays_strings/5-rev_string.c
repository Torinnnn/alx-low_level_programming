#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: pointer parameter
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int middle = length / 2;
	char temp;
	int i;

	while (s[i] < middle)
	{
		i = 0;
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
	return (i);
}


