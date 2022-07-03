#include <stdio.h>
#include <stdlib.h>
/**
 * main - Enter main
 * Description:  prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
