#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print elements of an arra
 * @a: pointer variable
 * @n: variable
 *
 * Return always 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
