#include "main.h"

/**
 * swap_int - function that swaps two integers
 * @tempc: a integer that stores the values temporarily
 * @a: a first integer whose value is exchanged
 * @b: a second integer whose value is to be exchanged with the first
 *
 * Return: nothing
 */
void swap_int(int *a, int *b, int tempc)
{
	int tempc;

	tempc = *a;
	*a = *b;
	*b = tempc;
}

