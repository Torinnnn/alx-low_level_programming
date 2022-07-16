#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers
 * @a: array lists
 * @n: number of elements of the array
 * Return: return nothing
 */
void reverse_array(int *a, int n)
{
	int i, i2, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (i2 = i + 1; i2 > 0; i2--)
		{
			temp = *(a + i2);
			*(a + i2) = *(a + (i2 - 1));
			*(a + (i2 - 1)) = temp;
		}
	}
}
