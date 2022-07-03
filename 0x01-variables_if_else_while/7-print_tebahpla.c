#include <stdio.h>
#include <stdlib.h>
/**
 * main - Enter main
 * Description: prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
